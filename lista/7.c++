#include <iostream>
#include <string>
using namespace std;

int main()
{
    int matesquerda[10][3] = {0};
    int matmeio[10][4] = {0};
    int matdireita[10][3] = {0};
    string resp, respostaFinal;
    int fila, cadeira;
    fila = 0;
    cadeira = 0;
    respostaFinal = " ";
    resp = " ";
    int i, j;
    int cont = 1;
    while (cont <= 100)
    {

        cout << "Onde deseja sentar? (Esquerda, Meio ou Direita): ";
        cin >> resp;

        cout << "Qual a fila (1 a 10): ";
        cin >> fila;
        fila--;

        cout << "Qual a cadeira (1 a 3 ou ate 4 para meio): ";
        cin >> cadeira;
        cadeira--;

        if (resp == "Esquerda" || resp == "esquerda")
        {
            if (fila >= 0 && fila < 10 && cadeira >= 0 && cadeira < 3)
            {

                if (matesquerda[fila][cadeira] == 0)
                {
                    matesquerda[fila][cadeira] = 1;
                    cout << "Assento vendido com sucesso!" << endl;
                }
                else
                {
                    cout << "Assento ja esta ocupado." << endl;
                }
            }
            else
            {
                cout << "Posicao invalida." << endl;
            }
        }
        else if (resp == "Meio" || resp == "meio")
        {
            if (fila >= 0 && fila < 10 && cadeira >= 0 && cadeira < 4)
            {

                if (matmeio[fila][cadeira] == 0)
                {
                    matmeio[fila][cadeira] = 1;
                    cout << "Assento vendido com sucesso!" << endl;
                }
                else
                {
                    cout << "Assento ja esta ocupado." << endl;
                }
            }
            else
            {
                cout << "Posicao invalida." << endl;
            }
        }
        else if (resp == "Direira" || resp == "direira")
        {
            if (fila >= 0 && fila < 10 && cadeira >= 0 && cadeira < 3)
            {

                if (matdireita[fila][cadeira] == 0)
                {
                    matdireita[fila][cadeira] = 1;
                    cout << "Assento vendido com sucesso!" << endl;
                }
                else
                {
                    cout << "Assento ja esta ocupado." << endl;
                }
            }
            else
            {
                cout << "Posicao invalida." << endl;
            }
        }

        cout << "Deseja comprar outro bilhete? (S/N): ";
        cin >> respostaFinal;

        if (respostaFinal == "S" || respostaFinal == "s")
        {
            cont++;
        }
        else
        {
            break;
        }
    }
    int vendidos = 0;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matesquerda[i][j] == 1)
            {
                vendidos++;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (matmeio[i][j] == 1)
            {
                vendidos++;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matdireita[i][j] == 1)
            {
                vendidos++;
            }
        }
    }
    int total_assentos = 100;
    int nao_vendidos = total_assentos - vendidos;

    // Resultados finais
    cout << " RESUMO DO DIA: " << endl;
    cout << "a) Assentos vendidos: " << vendidos << endl;
    cout << "b) Assentos não vendidos: " << nao_vendidos << endl;

    return 0;
}