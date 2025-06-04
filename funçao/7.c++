#include <iostream>

using namespace std;
void tabuada(int n){
    for (int i = 1; i <= 10; i++)
    {
        int tabuada = n * i;
        cout<< n <<"+"<< i<<"= "<< tabuada;
    }
    
}
int main(){
    int n;
    cout<<"Digite um numero: ";
    cin>>n;
}