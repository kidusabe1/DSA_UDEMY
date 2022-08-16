#include <iostream>
#include <vector>
using namespace std;
void counting_sort(int arr[],int n)
{
    int largest= 0;
    // finding the largest number for the range
    for(int i=0;i<n;i++)
    {
        largest=max(largest,arr[i]);
    }
    vector <int> count(largest+1,0);
    //storing the frequency of each element in count array
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    int j=0;
    for(int i=0;i<largest+1;i++)
    {
        while(count[i]>0)
        {
            arr[j]=i;
            count[i]--;
            j++;
        }
    }
}

int main()
{
    int arr[]={5,2,7,3,7,12,8,3,8,0,0,9,9,0,4,2,4,7};
    int n=sizeof(arr)/sizeof(int);
    counting_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<< arr[i]<<" ,";
    }
    return 0;
}