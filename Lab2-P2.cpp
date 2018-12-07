#include <iostream>

using namespace std;

int main()
{   int n, suma,i;
    cout << "Sa se afiseze suma primelor n numere naturale" << endl;
    cout<<"n="; cin>>n;
    suma=0;
    i=0;
    while(i<=n)
    {
    suma=suma+i;
    i++;
    }
    cout<<"Suma numerelor de la 0 pana la "<<n<<" este:"<<suma;
    return 0;
}
