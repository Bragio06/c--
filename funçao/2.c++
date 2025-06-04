#include <iostream>

using namespace std;

void numeroMaior(int num1 , int num2){
    if (num1 > num2)
    {
        cout<<"O numero "<<num1<<" e maior";
    }else
    {
        cout<<"O numero "<<num2<<" e maior";
    }
    
    
}


int main()
{
    int num1,num2;
    cout<<"digite o primeiro numero: ";
    cin>>num1;

    cout<<"digite o segundo numero: ";
    cin>>num2;

    numeroMaior(num1,num2);

}