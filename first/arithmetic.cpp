#include <iostream>
using namespace std;
int main()
{
    int a=3,n,i,d=2,an=0,sn=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        an = a+((i-1)*d);
        cout<<"term"<<i<<"="<<an<<endl;
        sn=sn+an;
    }
     cout<<"sum ="<<sn<<endl;
    return 0;
}
