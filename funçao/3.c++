#include <iostream>

using namespace std;

void vogal(char letra){
    if (letra == 'a'||letra == 'e'||letra == 'i'||letra == 'o'||letra == 'u')
    {
        cout<<" e uma vogal";
    }else{
        cout<<" nao e";
    }
    
}

int main()
{
    char letra;
    cout<<"Digite uma letra: ";
    cin>>letra;
    vogal(letra);
    return 0;
}