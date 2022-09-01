#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int partition(vector <int> &arr, int lb, int ub)
{
    int pivot=arr[lb];
    int start=lb;
    int end=ub;
    while(start<end)
    {
        while(arr[start]<=pivot)
        {
            start++;
        }
        while(arr[end]>pivot)
        {
            end--;
        }
        if(start<end)
            swap(arr[start],arr[end]);
    }
    swap(arr[lb],arr[end]); // WHY arr[end] and not arr[start]??????
    return end;
}

void quick_sort(vector <int> &arr, int lb, int ub)
{
    // Base case
    if(lb>=ub)
        return ;
    if(lb<ub)
    {
        int location= partition(arr,lb,ub);
        quick_sort(arr,lb,location-1);
        quick_sort(arr,location+1,ub);
    }
}

int main()
{
    vector <int> arr={4,63,8,4,8,4,6,3,1,8,75,4};
    // Before Sorting
    for(auto x :arr)
        cout<<x<<" ";
    quick_sort(arr,0,11);
    //After Sorting
    cout<<endl;
    for(auto x :arr)
        cout<<x<<" ";
    return 0;
}