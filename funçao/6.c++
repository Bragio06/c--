#include <iostream>

using namespace std;
void print(int vetNum[5]){
    cout<<"OS NUMEROS SAO"<<endl;
    for (int i = 0; i <= 4; i++)
    {
        
        cout<<vetNum[i]<<"|";
    }
    
}
int main()
{
    int vetNum[5];

    for (int i = 0; i <= 4; i++)
    {
        cout<<"digite um numero: ";
        cin>>vetNum[i];
    }
    print(vetNum);
    return 0;
    
}