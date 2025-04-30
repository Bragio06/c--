#include <iostream>
#include <string>

using namespace std;

int main() {
    int esquerda[10][3] = {0};
    int meio[10][4] = {0};
    int direita[10][3] = {0};

    char resposta;

    do {
        string local;
        int fila, cadeira;

        cout << "\nOnde deseja sentar? (Esquerda, Meio ou Direita): ";
        cin >> local;

        cout << "Qual a fila (1 a 10): ";
        cin >> fila;
        fila--;

        cout << "Qual a cadeira (1 a 3 ou até 4 para meio): ";
        cin >> cadeira;
        cadeira--;

        if (local == "Esquerda" || local == "esquerda") {
            if (fila >= 0 && fila < 10 && cadeira >= 0 && cadeira < 3) {
                if (esquerda[fila][cadeira] == 0) {
                    esquerda[fila][cadeira] = 1;
                    cout << "Assento vendido com sucesso!\n";
                } else {
                    cout << "Assento já está ocupado.\n";
                }
            } else {
                cout << "Posição inválida.\n";
            }
        } else if (local == "Meio" || local == "meio") {
            if (fila >= 0 && fila < 10 && cadeira >= 0 && cadeira < 4) {
                if (meio[fila][cadeira] == 0) {
                    meio[fila][cadeira] = 1;
                    cout << "Assento vendido com sucesso!\n";
                } else {
                    cout << "Assento já está ocupado.\n";
                }
            } else {
                cout << "Posição inválida.\n";
            }
        } else if (local == "Direita" || local == "direita") {
            if (fila >= 0 && fila < 10 && cadeira >= 0 && cadeira < 3) {
                if (direita[fila][cadeira] == 0) {
                    direita[fila][cadeira] = 1;
                    cout << "Assento vendido com sucesso!\n";
                } else {
                    cout << "Assento já está ocupado.\n";
                }
            } else {
                cout << "Posição inválida.\n";
            }
        } else {
            cout << "Local inválido.\n";
        }

        cout << "Deseja comprar outro bilhete? (S/N): ";
        cin >> resposta;

    } while (resposta == 'S' || resposta == 's');

    // Contadores
    int vendidos = 0;
    int corredor = 0;

    // Contagem de assentos vendidos e corredores usando for
    for (int i = 0; i < 10; i++) {
        // Esquerda
        for (int j = 0; j < 3; j++) {
            if (esquerda[i][j] == 1) {
                vendidos++;
                if (j == 2) corredor++; // Assento do corredor
            }
        }
        // Meio
        for (int j = 0; j < 4; j++) {
            if (meio[i][j] == 1) {
                vendidos++;
                if (j == 0 || j == 3) corredor++; // Corredores no meio
            }
        }
        // Direita
        for (int j = 0; j < 3; j++) {
            if (direita[i][j] == 1) {
                vendidos++;
                if (j == 0) corredor++; // Assento do corredor
            }
        }
    }

    int total_assentos = 100;
    int nao_vendidos = total_assentos - vendidos;

    // Resultados finais
    cout << "\nRESUMO DO DIA:\n";
    cout << "a) Assentos vendidos: " << vendidos << endl;
    cout << "b) Assentos não vendidos: " << nao_vendidos << endl;
    cout << "c) Assentos vendidos no corredor: " << corredor << endl;

    return 0;
}
