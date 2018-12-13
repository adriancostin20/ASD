#include <iostream>

using namespace std;

int main()
{   int a,b,x;
    cout << "Sa se verifice daca un numar real x se afla in intervalul [a,b)" << endl;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"x=";cin>>x;
    if(a<=x && x<b)
        cout<<"Numarul "<<x<<" se afla in intervalul ["<<a<<","<<b<<")";
    else
        cout<<"Numarul "<<x<<" nu se afla in intervalul ["<<a<<","<<b<<")";
    return 0;
}
