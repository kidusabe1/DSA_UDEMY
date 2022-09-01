#include <iostream>

using namespace std;

bool is_sorted(int arr[], int n)
{
    if(n==1)
    {
        return true;
    }
    if(arr[0]<arr[1] && is_sorted((arr+1),n-1))
    {
        return true;
    }
    if(arr[0]>arr[1] && is_sorted((arr+1),n-1))
    {
        return true;
    } 
    return false;
}

int main()
{
    int arr[]={5,4,3,2,1};
    int brr[]={1,0,3,4,5};
    cout<<is_sorted(arr,5)<<"\n"<<is_sorted(brr,5)<<endl;
    return 0;
}