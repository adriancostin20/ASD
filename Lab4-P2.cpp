#include <iostream>

using namespace std;

int main()
{   unsigned long int n;
    cout << "Se citeste un numar pozitiv,intreg,de maxim 5 cifre sa se determine cate cifre are numarul" << endl;
    cout<<"n=";cin>>n;
    if(n<10)
        cout<<"Numarul are o cifra";
    else if(n<100)
        cout<<"Numarul are doua cifre";
    else if(n<1000)
        cout<<"Numarul are trei cifre";
    else if(n<10000)
        cout<<"Numarul are patru cifre";
    else if(n<100000)
        cout<<"Numarul are cinci cifre";
    else
        cout<<"Numarul nu respecta conditia";
    return 0;
}
