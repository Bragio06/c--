#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int vendedores = 10;
    const int meses = 12;
    string nomes[vendedores];
    double vendas[vendedores][meses];
    double totalVendedor[vendedores] = {0};
    double totalMes[meses] = {0};
    double totalEmpresa = 0;

    // Registrar os nomes dos vendedores
    cout << "Digite o nome dos 10 vendedores: ";
    for (int i = 0; i < vendedores; i++)
    {
        cout << "Vendedor " << (i + 1) << ": ";
        cin>> nomes[i];
    }

    // Registrar as vendas
    cout << "Digite as vendas dos 10 vendedores (12 meses): ";
    for (int i = 0; i < vendedores; i++)
    {
        cout << "Vendas de " << nomes[i] << ": ";
        for (int j = 0; j < meses; j++)
        {
            cout << "Mes " << (j + 1) << ": ";
            cin >> vendas[i][j];
        }
    }

    // Calcular a arrecadação anual de cada vendedor e a arrecadação mensal
    for (int i = 0; i < vendedores; i++)
    {
        for (int j = 0; j < meses; j++)
        {
            totalVendedor[i] += vendas[i][j];
            totalMes[j] += vendas[i][j];
            totalEmpresa += vendas[i][j];
        }
    }

    // Mostrar arrecadação anual de cada vendedor
    cout << "Arrecadacao anual de cada vendedor:";
    for (int i = 0; i < vendedores; i++)
    {
        cout << nomes[i] << ": R$ " << totalVendedor[i] << endl;
    }

    // Encontrar o vendedor com maior arrecadação
    int indiceMaior = 0;
    for (int i = 1; i < vendedores; i++)
    {
        if (totalVendedor[i] > totalVendedor[indiceMaior])
        {
            indiceMaior = i;
        }
    }
    cout << " Vendedor com maior arrecadacao anual: " << nomes[indiceMaior]
         << " com R$ " << totalVendedor[indiceMaior] << endl;

    // Encontrar o mês com menor arrecadação geral
    int indiceMenorMes = 0;
    for (int j = 1; j < meses; j++)
    {
        if (totalMes[j] < totalMes[indiceMenorMes])
        {
            indiceMenorMes = j;
        }
    }
    cout << "Mes que menos arrecadou no geral: Mes " << (indiceMenorMes + 1)
         << " com R$ " << totalMes[indiceMenorMes] << endl;

    cout << "Soma geral da arrecadacao da empresa: R$ " << totalEmpresa << endl;

    return 0;
}
