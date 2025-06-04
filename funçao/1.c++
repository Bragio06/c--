#include <iostream>

using namespace std;


void verificarNumero(int num){
    if (num % 2 == 0){
        cout<<"O numero e par"<<endl;
    }else{
        cout<<"O numero e impar"<<endl;
    }
    
    
}
int main()
{ 
    int num;

    cout<<"Digite um numero inteiro: ";
    cin>>num;

    verificarNumero(num);
}