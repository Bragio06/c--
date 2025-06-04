#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
void troca(string palavra){
    reverse(palavra.begin(), palavra.end());
    cout <<palavra<<endl; 
}


int main(){
    string palavra;
    cout<<"Digite uma palavra: ";
    cin>> palavra;
    troca(palavra);
    return 0;
}