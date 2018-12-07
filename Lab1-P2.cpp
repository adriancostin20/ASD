#include <iostream>

using namespace std;

int main()
{   int a,b,x;
    cout << "Sa se precizeze algoritmul de rezolvare a ecuatiei de gradul 1 AX+B=0, valorile coeficientilor A si B fiind cunoscute." << endl;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    if(a!=0)
    {
        x=-b/a;
        cout<<x;
    }
    else
        if(b==0)
            cout<<"Ecuatie nedeterminata";
        else
            cout<<"Ecuatie imposibila";
    return 0;
}
