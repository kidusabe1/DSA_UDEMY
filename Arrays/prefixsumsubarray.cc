#include<bits/stdc++.h>
using namespace std;
int sumubarray(int arr[],int n)
{
    int largest=0, current=0;
    int prefix[100]={0};
    prefix[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
    for(int i=0;i<n;i++)
    {

        for(int j=i;j<n;j++)    
        {
            current=0;
            current=prefix[j]-prefix[i-1];
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