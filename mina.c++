#include <iostream>
#include <vector>
#include <set>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

const int TAMANHO = 10;
const int MINAS = 10;

typedef pair<int, int> Posicao;

// Função para criar a grade com minas
vector<vector<char>> criar_grade() {
    vector<vector<char>> grade(TAMANHO, vector<char>(TAMANHO, ' '));

    vector<int> posicoes;
    for (int i = 0; i < TAMANHO * TAMANHO; i++) {
        posicoes.push_back(i);
    }

    random_shuffle(posicoes.begin(), posicoes.end());

    for (int i = 0; i < MINAS; i++) {
        int pos = posicoes[i];
        int x = pos / TAMANHO;
        int y = pos % TAMANHO;
        grade[x][y] = 'M';
    }

    return grade;
}

// Função para contar minas adjacentes
int calcular_adjacentes(const vector<vector<char>>& grade, int x, int y) {
    int contagem = 0;
    int direcoes[8][2] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
    for (auto& d : direcoes) {
        int nx = x + d[0];
        int ny = y + d[1];
        if (nx >= 0 && nx < TAMANHO && ny >= 0 && ny < TAMANHO && grade[nx][ny] == 'M') {
            contagem++;
        }
    }
    return contagem;
}

// Função para revelar células recursivamente
void revelar(const vector<vector<char>>& grade, vector<vector<bool>>& visivel, int x, int y) {
    if (visivel[x][y] || grade[x][y] == 'M') return;

    visivel[x][y] = true;
    int adj = calcular_adjacentes(grade, x, y);
    if (adj == 0) {
        int direcoes[8][2] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
        for (auto& d : direcoes) {
            int nx = x + d[0];
            int ny = y + d[1];
            if (nx >= 0 && nx < TAMANHO && ny >= 0 && ny < TAMANHO) {
                revelar(grade, visivel, nx, ny);
            }
        }
    }
}

// Função para imprimir a grade
void imprimir_grade(const vector<vector<char>>& grade,
                    const vector<vector<bool>>& visivel,
                    const set<Posicao>& marcacoes) {
    cout << "  ";
    for (int i = 0; i < TAMANHO; i++) cout << i << " ";
    cout << endl;
    for (int i = 0; i < TAMANHO; i++) {
        cout << i << " ";
        for (int j = 0; j < TAMANHO; j++) {
            if (marcacoes.count({i, j})) {
                cout << "M ";
            } else if (visivel[i][j]) {
                if (grade[i][j] == 'M') {
                    cout << "M ";
                } else {
                    int adj = calcular_adjacentes(grade, i, j);
                    cout << (adj > 0 ? to_string(adj) : " ") << " ";
                }
            } else {
                cout << "- ";
            }
        }
        cout << endl;
    }
}

// Função principal do jogo
void jogar() {
    srand(time(0));
    auto grade = criar_grade();
    vector<vector<bool>> visivel(TAMANHO, vector<bool>(TAMANHO, false));
    set<Posicao> marcacoes;

    while (true) {
        imprimir_grade(grade, visivel, marcacoes);
        cout << "Escolha uma ação (R x y / M x y): ";
        string comando;
        int x, y;
        cin >> comando >> x >> y;

        if (x < 0 || x >= TAMANHO || y < 0 || y >= TAMANHO) {
            cout << "Coordenadas inválidas!" << endl;
            continue;
        }

        if (comando == "R") {
            if (grade[x][y] == 'M') {
                cout << "Game Over! Você abriu uma mina!" << endl;
                visivel[x][y] = true;
                imprimir_grade(grade, visivel, marcacoes);
                break;
            }
            revelar(grade, visivel, x, y);
        } else if (comando == "M") {
            marcacoes.insert({x, y});
        } else {
            cout << "Comando inválido!" << endl;
        }

        // Verifica se ganhou
        int abertas = 0;
        for (int i = 0; i < TAMANHO; i++) {
            for (int j = 0; j < TAMANHO; j++) {
                if (visivel[i][j]) abertas++;
            }
        }
        if (abertas == TAMANHO * TAMANHO - MINAS) {
            cout << "Parabéns! Você venceu!" << endl;
            imprimir_grade(grade, visivel, marcacoes);
            break;
        }
    }
}

// Ponto de entrada
int main() {
    jogar();
    return 0;
}
