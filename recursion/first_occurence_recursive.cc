#include <iostream>

using namespace std;

int check_key(int arr[],int key,int n)
{
    if(n==0)
    {
        return -1;
    }

    if(arr[0]==key)
    {
        return 0;
    }

    int sub_index=check_key((arr+1),key,n-1);
    if(sub_index!=-1)
    {
        return sub_index+1;
    }
    return -1;
}


int main()
{
    int arr[]={1,2,3,4,5,6};
    int key=2;
    cout<<check_key(arr,key,6)<<endl;
    return 0;
}