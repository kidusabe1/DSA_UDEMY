#include <iostream>
using namespace std;
int main()
{
    int i,j, arr[100],n,temp;
    cout<< "enter number of elements" <<endl;
    cin>>n;
    cout<<"Provide the array elements" <<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    } 
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<< arr[i]<<" "<<endl;
    }
    return 0;
}