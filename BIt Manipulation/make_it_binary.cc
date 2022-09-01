#include <bits/stdc++.h>
using namespace std;

int to_binary(int n)
{
    int count=0, ans=0,current;
    while(n>0)
    {
        current=(n&1);
        ans=ans+ (current*pow(10,count)); 
        count++;
        n=n>>1;
    }

    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<to_binary(n)<<endl;
    return 0;
}