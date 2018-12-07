#include <iostream>

using namespace std;

int main()
{   int a,b,c, max;
    cout << "Sa se afiseze maximul a 3 numere: a,b,c" << endl;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c=";cin>>c;
    if(a>=b)
        max=a;
    else
        max=b;
    if (c>max)
        max=c;
    else
        cout<<"Maximul este: "<<max;
    return 0;
}
