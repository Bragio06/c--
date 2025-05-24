#include <iostream>
#include <string>

using namespace std;
int main()
{
    string vetnome[20];
    double matgasto[12][20];
    double vatmedia[20];
    double media, soma;
    int contMaior = 0, contMenor = 0;
    string busca = " ";
    int i, j;
    double gastoMaior = 0, gastoMenor = 0;
    string nomeMaior = " ", nomeMenor = " ";
    double vetGastoAnual[20];
    int resp;
    double vetMedia[20];

    for (i = 0; i < 19; i++)
    {
        cout << "Qual o nome do " << i + 1 << "º cliente" << endl;
        cin >> vetnome[i];
    }
    for (j = 0; j < 19; j++)
    {
        cout << "Qual o gasto mensal de energia do " << j + 1 << "º cliente" << endl;
        for (i = 0; i < 11; i++)
        {
            cout << "Qual foi o gato do mes" << i + 1 << endl;
            cin >> matgasto[i][j];
            soma = +matgasto[i][j];
        }
        if (soma > gastoMaior)
        {
            nomeMaior = vetnome[i];
            gastoMaior = soma;
        }
        media = soma / 12;
        vetMedia[j] = media;
        vetGastoAnual[j] = soma;
        soma = 0;
        media = 0;
    }
    for (j = 0; j < 19; j++)
    {
        for (i = 0; i < 11; i++)
        {
            nomeMenor = vetnome[j];
            gastoMenor = matgasto[i][j];
        }
    }
    cout <<"Deseja buscar por algum nome(se sim digite 1 se não 2)"<< endl;
    cin >> resp;

    while (resp == 1)
    {
        cout<<"digite o nome "<<endl;
        cin>> busca;
        for ( i = 0; i < 20; i++)
        {
            if (busca == vetnome[i])
            {
                cout<<" o cliente "<<busca<< endl;
                cout<<"teve um gasto anual de "<< vetGastoAnual[i]<<endl;
                cout<<"ele teve um gasto anual de "<<vetGastoAnual[i]<<endl;
                
            }
            
        }
        
    }

    
}

