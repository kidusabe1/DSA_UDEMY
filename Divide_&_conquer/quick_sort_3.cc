#include <iostream>
using namespace std;
 
int partition(int arr[], int start, int end)
{
    int i=end+1;
    int pivot= arr[start];
    for(int j=end;j>start;j--)
    {
        if(arr[j]>pivot)
        {
            i--;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i-1],arr[start]);
    return i-1;
}
 
void quickSort(int arr[], int start, int end)
{

    // base case
    if (start>=end)
        return;
 
    // partitioning the array
    int p = partition(arr, start, end);
 
    // Sorting the left part
    quickSort(arr, start, p - 1);
 
    // Sorting the right part
    quickSort(arr, p + 1, end);
}
 
int main()
{
 
    int arr[] = {4,63,8,4,8,4,6,3,1,8,75,4};
    int n = 12;
 
    quickSort(arr, 0, n - 1);
 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
 
    return 0;
}