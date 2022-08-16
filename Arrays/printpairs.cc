#include <iostream>
using namespace std;
void printpairs(int arr[], int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            cout<< "("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }
}
int main()
{
    int i,arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(n);
    printpairs(arr,n);
    return 0;
}