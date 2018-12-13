#include <iostream>

using namespace std;

int main()
{   int nr,a;
    cout << "Se citesc numere intregi pana la intalnirea lui 0. Sa se afiseze cate numere s-au citit" << endl;
    a=0;
    do
    {
        cout<<"Numarul "<<a<<"=";cin>>nr;
        a++;
    } while (nr!=0);
    cout<<"S-au citit "<<a<<" numere";
    return 0;
}
