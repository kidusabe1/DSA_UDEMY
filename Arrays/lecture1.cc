#include <iostream>
using namespace std;
void printarray(int* arr,int n)
{
    //int n=sizeof(arr)/sizeof(int);
    arr[0]=243;
    cout<< "array inside function\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[100],n,i;
    cout<<"enter number of elements" << endl;
    cin>> n;
    for(i=0; i<n; i++)
    {
        cin>> arr[i];
    }
    printarray(arr,n);
    cout<< "The array inside the main function\n";
    for(i=0;i<n;i++)
    {
        cout<< arr[i]<<endl;
    }
    return 0;
}