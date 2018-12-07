#include <iostream>
#include <math.h>

using namespace std;

int main()
{   float x;
    float f;
    cout<<"x=";cin>>x;
    if(x<=-7)
          f=-6*x+20;
    if(x>-7 && x<0)
        f=x+30;
    if(x>0)
        f=sqrt(x)+2;
    cout<<"f="<<f;
    return 0;
}
