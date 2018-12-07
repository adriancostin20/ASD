#include <iostream>

using namespace std;

int main()
{
    int n, s, p, i;
    cout<<"n=";cin>>n;
    s=0;
    p=1;
    for(i=1;i<=n;i++)
       {
           s=s+i;
           p=p*i;
       }
    cout<<"Suma numerelor este: "<<s<<endl;
    cout<<"Produsul numerelor este: "<<p<<endl;
    return 0;
}
