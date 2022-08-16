#include <iostream>
using namespace std;
int sumubarray(int arr[],int n)
{
    int largest=0, current=0;
    for(int i=0;i<n;i++)
    {

        for(int j=i;j<n;j++)
        {
            current=0;
            for(int k=i;k<=j;k++)
            {
                current+=arr[k];
            }
            //cout<<endl;
            largest=max(largest,current);
        }
        cout<<endl;
    }
    return largest;
}
int main()
{
    int arr[]={1,2,3,4,-5,6,-7,-8,-9,-10};
    int n=sizeof(arr)/sizeof(n);
    cout<<sumubarray(arr,n);
    return 0;
}