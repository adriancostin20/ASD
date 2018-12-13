#include <iostream>

using namespace std;

int main()
{   double a,b;
    cout << "Rezolvarea ecuatiei de grad 1: ax+b=0" << endl;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    if(a==0)
    {
        if(b==0)
            cout<<"Ecuatia are o infinitate de solutii\n";
        else
            cout<<"Ecuatia nu are nicio solutie\n";
    }
    else
        cout<<"Rezultatul ecuatiei este: "<<-b/a;
    return 0;
}
