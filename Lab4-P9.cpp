#include <iostream>

using namespace std;

int main()
{   int n,i;
    bool p;
    cout << "Verificare numar prim" << endl;
    cout<<"n=";cin>>n;
    p=1;
    i=2;
    while(i<=n-1)
    {
        if(n%i == 0)
            p=0;
        i++;
    }
    if(p==1)
        cout<<"nr prim";
    else
        cout<<"nr nu e prim";
    return 0;
}
