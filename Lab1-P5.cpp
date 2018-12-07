#include <iostream>

using namespace std;

int main()
{   int a,b,max;
    cout << "Se dau doua numere naturale a si b distincte. Sa se determine care dintre ele are valoarea mai mare." << endl;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    if(a>b)
        max=a;
    else
        max=b;
    cout<<max;
    return 0;
}
