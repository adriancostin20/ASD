#include <iostream>

using namespace std;

int main()
{   int n,p;
    cout << "Se citesc mai multe numere pana se citeste cifra 0. Sa se afiseze numerele de pe pozitii pare" << endl;
    cout<<"n=";cin>>n;
    p=1;
    while(n!=0)
    {
        if(p%2==0)
            cout<<n;
        cout<<"n nu este 0. introdu alta valoare"<<endl;
        cout<<"n=";cin>>n;
    }
    return 0;
}
