#include <iostream>

using namespace std;

int main()
{
    int matdiagonal[5][5];
    int i,j;
    for ( i = 0; i <= 4; i++){
        for ( j = 0; j <= 4; j++){
            if (i == j){
                matdiagonal[i][j] = 1;
            }else{
                matdiagonal[i][j] = 0;
            }
        }

    }
    for ( i = 0; i <= 4; i++){
        cout<<"----------"<<endl;
        cout << "|";
        for ( j = 0; j <= 4; j++){
            cout << matdiagonal[i][j] << "|";
        }
        cout <<" "<< endl;
    }
    return 0;

}