#include <iostream>

using namespace std;

int main()
{   int n, i;
    long int p;
    cout << "Factorialul unui numar n n!=1*2*3*...*n" << endl;
    cout<<"n=";cin>>n;
    p=1;
    i=1;
    while(i<=n)
    {
        p=p*i;
        i++;
    }
    cout<<"Factorialul numarului "<<n<<" este: "<<p;
    return 0;
}
