#include <iostream>

using namespace std;

int main()
{   int a,b,aux;
    cout << "Interschimbare numere" << endl;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    aux=a;
    a=b;
    b=aux;
    cout<<"---------\n";
    cout<<"a="<<a<<endl;
    cout<<"b="<<b;
    return 0;
}
