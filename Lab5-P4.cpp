#include <iostream>

using namespace std;

int main()
{   int n,s,i;
    cout << "Suma primelor n numere naturale" << endl;
    cout<<"n=";cin>>n;
    s=0;
    for(i=1;i<=n;i++)
        s+=i;
    cout<<"Suma primelor n numere este: "<<s;
    return 0;
}
