#include <iostream>

using namespace std;

int main()
{   int n,i;
    long fact,s;
    cout << "Suma S=1+1*2+1*2*3+..+n!" << endl;
    cout<<"n=";cin>>n;
    s=0;fact=1;
    for(i=1;i<=n;i++)
    {
        fact*=i;
        s+=fact;
    }
    cout<<"n!="<<s;
    return 0;
}
