#include <iostream>

using namespace std;

int main()
{   int a,b,c,d;
    cout << "Se citesc 4 nr. Sa se det. daca exista 3 nr a caror suma sa fie pozitiva." << endl;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c=";cin>>c;
    cout<<"d=";cin>>d;
    if(a+b+c>0 || a+b+d>0 || b+c+d>0 || a+c+d>0)
        cout<<"Suma este pozitiva";
    else
        cout<<"Suma nu este pozitiva";
    return 0;
}
