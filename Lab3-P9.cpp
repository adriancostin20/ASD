#include <iostream>

using namespace std;

int main()
{   int n,p;
    cout << "Se citesc mai multe numere pana se citeste cifra 0. Sa se afiseze toate numerele citite divizibile cu 5" << endl;
    cout<<"n=";cin>>n;
    p=0;
    while(n!=0)
    {
        if(n%5==0)
        {
            cout<<"Numarul "<<n<<" este divizibil cu 5"<<endl;
        }
        cout<<"n=";cin>>n;
    }
    cout<<"p="<<p;
    return 0;
}
