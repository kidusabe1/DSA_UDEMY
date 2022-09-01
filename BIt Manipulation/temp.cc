#include<bits/stdc++.h>
using namespace std;
 
 
double power(double x, double y, double mod)
{
    double res= (pow(x,y)%mod);
    return res;
}

int main()
{
    cout<<power(12,25,10007);
    return 0;
}