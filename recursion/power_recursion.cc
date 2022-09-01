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

int main()
{
    int c=2,p=10;
    cout<<power_recurse(c,p)<<endl;
    return 0;
}