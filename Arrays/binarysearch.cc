#include <iostream>
using namespace std;
int binary(int arr[],int n, int key)
{
    int s=0, e=n-1, mid;
    while(s<=e)
    {
        mid= (s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            s= mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return -1;
}
int main()
{
    int i,n,key,index;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    n=sizeof(arr)/sizeof(int);
    cout<<"Which number are you looking for?\n";
    cin>>key;
    index=binary(arr,n,key);
    if(index!=-1)
    {
        cout<<key<<" is found at index "<<index<<endl;
    }
    else
    {
        cout<<key<<" is not found\n";
    }
    return 0;
}