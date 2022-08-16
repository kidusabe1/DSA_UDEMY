#include <iostream>
#include <string>
#include<cmath>
using namespace std;
 
int binaryToDecimal(string s)
{
    int n= s.length()-1,N=0;
    int sum=0,rem,temp;
    temp=stoi(s);  
    for(int i=0;i<=n;i++)
    {
        rem= temp%10;
        temp/=10;
        sum= sum+ (rem*pow(2,N));
        N++;
    }
    return sum;
}
 
int main()
{
    string binary="1010";
    cout<<binaryToDecimal(binary);
    return 0;
}