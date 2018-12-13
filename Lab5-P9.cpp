#include <iostream>
#include <math.h>

using namespace std;

int main()
{   int i,n;
    bool prim;
    cout << "Numar prim" << endl;
    cout<<"n=";cin>>n;
    prim=1;
    for(i=2;i<=sqrt(n);i++)
        if(n%i==0)
        {
        prim=0;
        break;
        }
        if(prim)
            cout<<"Numar prim";
        else
            cout<<"Numarul nu este prim";
    return 0;
}
