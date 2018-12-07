#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cout<<"n=";cin>>n;
    i=1;
    cout<<"Numerele divizibile cu "<<n<< " sunt: ";
    for(i=1;i<=n;i++)
        if(n%i==0)
            cout<<i<<" ";
    return 0;
}
