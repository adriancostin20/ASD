#include <iostream>

using namespace std;

int main()
{   int n, i, x;
    float ma;
    cout << "Sa se afiseze media aritmetica a n numere ma=(n1+n2+...nn)/n " << endl;
    cout<<"n=";cin>>n;
    ma=0;
    for(i=1;i<=n;i++)
    {
        cout<<"x"<<i<<"=";cin>>x;
        ma=ma+x;
    }
    ma=ma/n;
    cout<<"Media aritmetica a numerelor este:"<<ma;
    return 0;
}
