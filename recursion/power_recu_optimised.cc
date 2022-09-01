#include <iostream>
using namespace std;

int power_recurse(int coefficient, int power)
{
    int result=1;
    if(power==0)
    {
        return 1;
    }
    result=coefficient*power_recurse(coefficient,power-1);
    return result;
}

int fast_power(int coefficient, int power)
{
    if(power==0)
        return 1;
    int sub_prob=fast_power(coefficient,power/2);
    int sub_sqr= sub_prob*sub_prob;
    if(power&1)
        return coefficient*sub_sqr; 
    return sub_sqr;
}
int main()
{
    int c=5,p=6;
    cout<<power_recurse(c,p)<<endl;
    cout<<fast_power(c,p)<<endl;
    return 0;
}

