#include <iostream>
using namespace std;

int main()
{
    int matnum[5][5];
    int transp[5][5];
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout << "Digite o elemento [" << i << "][" << j << "]: ";
            cin >> matnum[i][j];
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout << matnum[i][j] << "| ";
        }
        cout << " " << endl;
    }
    cout << "-------------------------" << endl;

    cout << "Transposta da matriz: " << endl;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transp[j][i] = matnum[i][j];
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout << transp[i][j] << "| ";
        }
        cout << " " << endl;
    }

    return 0;
}
