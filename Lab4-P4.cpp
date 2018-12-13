#include <iostream>

using namespace std;

int main()
{   int a,b;
    cout << "Se citesc 2 nr.Sa se afiseze care nr este par si care este impar." << endl;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    if (a%2==0)
        cout<<"a este numar par\n";
    else
        cout<<"a este numar impar\n";
    if (b%2!=0)
        cout<<"b este numar impar";
    else
        cout<<"b este numar par";
    return 0;
}
