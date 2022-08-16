#include <iostream>
using namespace std;
void bubble(int a[],int n)
{
    for(int times=1;times<=n-1;times++)
    {
        for(int j=0;j<=n-times-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main()
{
    int a[5]={1,4,2,5,3};
    int n=5;
    bubble(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}