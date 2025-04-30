#include <iostream>

using namespace std;

int main()
{
    int matnum[4][4];
    int i, j;
    int contador = 0;

    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            cout << "Digite o valor da linha " << i + 1 << " e coluna " << j + 1 << ": ";
            cin >> matnum[i][j];

            if (matnum[i][j] > 10){
                contador++;
            }
        }
    }
    cout << "A quantidade de numeros maiores que 10 e: " << contador << endl;
    return 0;
}
