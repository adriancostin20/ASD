#include <iostream>
#include <math.h>

using namespace std;

int main()
{   int a,b,c,p;
    float S;
    cout<<"Sa se calculeze aria unui triunghi oarecare daca se cunosc lungimile laturilor triunghiului." << endl;
    cout<<"Introduceti lungimile laturilor:\n";
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    cout<<"c=";cin>>c;
    p=(a+b+c)/2;
    S=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<"Aria="<<S;
    return 0;
}
