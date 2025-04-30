#include <iostream>
using namespace std;

int main() {
    const int LINHAS = 4;
    const int COLUNAS = 4;
    int matriz[LINHAS][COLUNAS];

    // Leitura da matriz
    cout << "Digite os elementos da matriz 4x4:\n";
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            cin >> matriz[i][j];
        }
    }

    // Impressão da matriz
    cout << "\nMatriz:\n";
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    int maior = matriz[0][0];
    int linhaMaior = 0;
    int colunaMaior = 0;

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

    // Exibir a posição do maior valor
    cout << "Maior valor: " << maior << " na posicao (" << linhaMaior << ", " << colunaMaior << ")\n";

    return 0;
}
