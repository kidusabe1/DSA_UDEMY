#include <iostream>

using namespace std;

int dec(int n)
{
    if(n==0)
    {
        return 0;
    }
    cout<<n<<" ";
    dec(n-1);
    return 0;
}

int inc(int n)
{
    if(n==0)
    {
        return 0;
    }
    inc(n-1);
    cout<<n<<" ";
    return 0;
}

int main()
{
    int n=10;
    dec(n);
    cout<<endl;
    inc(n);
    return 0;
}