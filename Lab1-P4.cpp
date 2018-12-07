#include <iostream>

using namespace std;

int main()
{   int x,y,z,S,P,D;
    cout << "Sa se calculeze si sa se afiseze pe ecran suma, produsul si diferenta a trei nume întregi x, y si z citite de la tastatura." << endl;
    cout<<"x=";cin>>x;
    cout<<"y=";cin>>y;
    cout<<"z=";cin>>z;
    S=x+y+z;
    P=x*y*z;
    D=x-y-z;
    cout<<"Suma="<<S<<"\n";
    cout<<"Produsul="<<P<<"\n";
    cout<<"Diferenta="<<D;
    return 0;
}
