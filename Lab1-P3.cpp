#include <iostream>

using namespace std;

int main()
{   int S,T,i;
    cout << "Sa se precizeze algoritmul pentru calculul sumei primilor 50 de termeni ai sirului: 1, 4, 7, 10, 13, 16,..." << endl;
    S=0;
    T=1;
    for(i=1;i<=50;i++)
    {
        S=S+T;
        T=T+3;
    }
    cout<<S;

    int Q,R,j;
    cout << "Sa se precizeze algoritmul pentru calculul sumei primilor 50 de termeni ai sirului: 1, 4, 7, 10, 13, 16,..." << endl;
    Q=0;
    R=1;
    j=1;
    if(j>50)
        cout<<R;
    else
    {
        R=R+Q;
        Q=Q+3;
        j++;
    }
    return 0;
}
