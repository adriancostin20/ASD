#include <iostream>

using namespace std;

int main()
{   int a,b,c;
    cout << "Se citesc 3 numere.Sa se determine daca cele 3 numere pot fi consecutive." << endl;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c=";cin>>c;
    if(b==a+1 && c==a+2)
        cout<<a<<b<<c;
    else if(c==a+1 && b==a+2)
        cout<<a<<" "<<c<<" "<<b;
    else if(a==b+1 && c==b+2)
        cout<<b<<" "<<a<<" "<<c;
    else if(c==b+1 && a==b+2)
        cout<<b<<" "<<c<<" "<<a;
    else if(a==c+1 && b==c+2)
        cout<<c<<" "<<a<<" "<<b;
    else if(b==c+1 && a==c+2)
        cout<<c<<" "<<b<<" "<<a;
    else
        cout<<"Numerele nu pot fi asezate consecutiv";
    return 0;
}
