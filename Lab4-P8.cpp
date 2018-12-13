#include <iostream>

using namespace std;

int main()
{   int n;
    cout << "Sa se scrie un algoritm care afiseaza daca numarul este un an bisect" << endl;
    cout<<"Anul: ";cin>>n;
    if(n%4==0)
        cout<<"An bisect";
    else
        if(n%100!=0 && n%400==0)
           cout<<"An bisect";
        else
            cout<<"Anul nu este bisect";
    return 0;
}
