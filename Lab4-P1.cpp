#include <iostream>

using namespace std;

int main()
{   int a,b,c,d;
    cout << "Se citesc 4 intregi numere sa se determine daca exista printre ele 3 numere pozitive." << endl;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c=";cin>>c;
    cout<<"d=";cin>>d;
    if((a>0 && b>0 && c>0)
       || (a>0 && b>0 && d>0)
       || (a>0 && c>0 && d>0)
       || (b>0 && c>0 && d>0))
        cout<<"Avem trei numere pozitive";
    else
        cout<<"Nu avem trei numere pozitive";
    return 0;
}
