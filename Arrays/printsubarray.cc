#include <iostream>
using namespace std;
void subarray(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {

        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<" ";
            }
            count++;
            cout<<endl;
        }
        cout<<endl;
    }
    cout<<"count=>"<<count;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(n);
    subarray(arr,n);
    return 0;
}