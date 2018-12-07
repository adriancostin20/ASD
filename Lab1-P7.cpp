#include <iostream>

using namespace std;

int main()
{   int n; float s, i;
    cout << "Sa se calculeze si sa se afiseze pe ecran suma primelor n numere naturale nenule. Valoarea lui n (numar natural nenul) se citeste de la tastatura." << endl;
    cout<<"n=";cin>>n;
    s=0; i=1;
    if(n%2==0){
        s=n*n/2+n/2;
    }
    else
    cout<<n*n/2;
    return 0;
}
