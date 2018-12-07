#include <iostream>

using namespace std;

int main()
{   int a,b,c,max;
    cout << "Se da urmatorul pseudocod, care calculeaza maximul a 3 numere: a,b,c." << endl;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c=";cin>>c;

    if(a>=b)
        max=a;
    else
        max=b;
    if(c>max)
        max=c;
        cout<<"Maximul este:"<<max;
    return 0;
}
