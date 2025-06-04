#include <iostream>
#include <string>

using namespace std;

void clintes(string vetNome[4])
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Informe o nome do " << i + 1 << " cliente: ";
        cin >> vetNome[i];
    }
}
void gastoMes(float gastos[3][4], string vetNome[4])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Informe os gastos do mes " << i + 1 << "°" << endl;
        for (int j = 0; j < 4; j++)
        {
            cout << "gastos do cliente " << vetNome[j] << ": ";
            cin >> gastos[3][4];
        }
    }
}
void mediaGasto(float gastos[3][4], float media[4])
{
    for (int j = 0; j < 4; j++)
    {
        float soma = 0;
        for (int i = 0; i < 3; i++)
        {
            soma += gastos[i][j];
        }

        media[j] = soma / 3.0;
    }
}
void exibirMedia(string vetNome[4], float media[4])
{

    for (int i = 0; i < 4; i++)
    {
        cout << "O cliente " << vetNome[i] << endl;
        cout << "A media do cliente foi de: " << media[i];
    }
}
void exibirMaiorGasto(float media[4], string vetNome[4])
{
    int indiceMaior = 0;
    int i;
    for (i = 0; i < 4; i++)
    {
        if (media[i] > media[indiceMaior])
        {
            indiceMaior = 1;
        }
    }
    cout << "Cliente com maior gasto medio " << vetNome[indiceMaior] << " (R$ " << media[indiceMaior] << " )" << endl;
}
void menorGastos(string vetNome[4], float media[4])
{
    string buscar;
    int continuar = 1;
    bool encontrado = false;
    int i;

    while (continuar == 1)
    {
        cout << "digite o nome do cliente para consultar o gasto media: ";
        cin >> buscar;
        for (i = 0; i < 4; i++)
        {
            if (vetNome[i] == buscar)
            {
                cout << "gasto media de " << vetNome[i] << "R$ " << media[i] << endl;
                encontrado = true;
                break;
            }
        }
        if (!encontrado)
        {
            cout << "Cliente nao encontrado" << endl;
        }

        cout << "Desejo pesquisar outro cliente? (1 - sim e 2 - nao)";
        cin >> continuar;
    }
}
int main()
{
    float gastos[3][4];
    string vetNome[4];
    float media[4];
    clintes(vetNome);
    gastoMes(gastos, vetNome);
    mediaGasto(gastos, media);
    exibirMedia(vetNome, media);
    exibirMaiorGasto(media, vetNome);
    menorGastos(vetNome, media);
    return 0;
}
