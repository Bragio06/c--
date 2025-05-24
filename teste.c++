#include <iostream>
#include <string>

using namespace std;

void comprimento(char x1,char x2)
{
    cout<<"alo "<<x1<<x2<<endl;
}
int main()
{
    char p1,p2;
    cout<<"entre com duas iniciais: ";
    cin >> p1;
    cin >>p2;
    comprimento(p1,p2);
    return 0;
}
