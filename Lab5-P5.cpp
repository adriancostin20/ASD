#include <iostream>

using namespace std;

int main()
{   int v,p;
    cout << "Actualizarea unei valori naturale cu un procent dat" << endl;
    cout<<"Valoare: ";cin>>v;
    cout<<"Procent: ";cin>>p;
    v=v+v*p;
    cout<<"Valoarea actualizata: "<<v;
    return 0;
}
