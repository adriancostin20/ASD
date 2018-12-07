#include <iostream>

using namespace std;

int main()
{   int n,i,s=0;
    cout << "Sa se scrie un program care verifica daca un numar n este perfect sau nu" << endl;
    cout<<"n=";cin>>n;
    for(i=1;i<=n-1;i++)
        if(n%i==0)
            s=s+i;
    if(s==n)
        cout<<"nr perfect";
    else
        cout<<"nr nu este perfect";
    return 0;
}
