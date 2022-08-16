#include <iostream>
using namespace std;
void insertion(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int current= arr[i];
        int prev= i-1;
        while(prev>=0 && arr[prev]>current)
        {
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=current;
    }
}
int main()
{
    int arr[]={4,2,6,-3,-12,6,8,3,-14};
    int n= sizeof(arr)/sizeof(int);
    insertion(arr,n);
    for(auto x : arr)
    {
        cout<< x <<", ";
    }
    return 0;
}
