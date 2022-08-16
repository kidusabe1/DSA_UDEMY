#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s1="kidus";
    string s2="Kdius";
    int sum1=0,sum2=0;
    for(int i=0;i<s1.length();i++)
    {
        sum1+=int(s1[i]);
        sum2+=int(s2[i]);
    }
    if(sum1==sum2)
        cout<<"TRUE";
    else
        cout<<"FALSE";
    return 0;
}