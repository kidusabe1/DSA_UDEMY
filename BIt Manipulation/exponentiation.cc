#include <bits/stdc++.h>
using namespace std;

int exponentiation(int a, int N)
{
    int last,ans=1,exp,count=1;
    while(N>0)
    {
        last= (N&1);
        if(last)
        {
            ans=ans*a;
        }
        a=a*a;
        N=N>>1;
    }
    return ans;
}

int main()
{
    int a=2, N=10;
    cout<<"5^3= "<<exponentiation(a,N)<<endl;
    return 0;
}
