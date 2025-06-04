#include <iostream>

using namespace std;

void media(int num1,int num2,int num3){
    float media = (num1+num2+num3)/3;
    cout<<" A media foi de: "<< media;
}

int main(){
    int num1,num2,num3;
    cout<<"Digite o primeiro numero: ";
    cin>>num1;

    cout<<"Digite o segundo numero: ";
    cin>>num2;

    cout<<"Digite o terceiro numero: ";
    cin>>num3;

    media(num1,num2,num3);
    return 0;
}
