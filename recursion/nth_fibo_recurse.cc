#include <iostream>

using namespace std;

int nth_fibo(int n)
{
    int result;
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    result= nth_fibo(n-1)+nth_fibo(n-2);
    return result;
}

int main()
{
    int n=6;
    cout<<nth_fibo(5);
    return 0;

}