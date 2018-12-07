#include <iostream>

using namespace std;

int main()
{   int x;
    cout << "Se citeste de la tastatura un numar întreg x. Sa se afiseze mesajul “Da” daca numarul citit este pozitiv sau mesajul “Nu” in caz contrar." << endl;
    cout<<"x=";cin>>x;
    if(x>0)
        cout<<"Numar pozitiv";
    else
        cout<<"Numar negativ";
    return 0;
}
