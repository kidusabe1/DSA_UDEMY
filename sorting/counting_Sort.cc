#include <iostream>
using namespace std;
void counting_sort(int arr[],int n)
{
    int largest= 0;
    // finding the largest number for the range
    for(int i=0;i<n;i++)
    {
        largest=max(largest,arr[i]);
    }
    int count[largest+1];
    //initializing the count array with 0s
    for(int i=0;i<largest+1;i++)
    {
        count[i]=0;
    }
    //storing the frequency of each element in count array
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    //updating the count array with cummulative sum
    for(int i=1;i<largest+1;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    int brr[n];
    //expanding and copying the count array into a new array
    for(int i=n-1;i>=0;i--)
    {
        brr[--count[arr[i]]]=arr[i];
    }
    //copying brr array in to arr array
    for(int i=0;i<n;i++)
    {
        arr[i]=brr[i];
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