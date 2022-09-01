#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Merge(vector <int> &arr, int s,int m, int e)
{
    int i=s;
    int j=m+1;
    int k=0;
    vector <int> temp;
    while(i<=m && j<=e)
    {
        if(arr[i]<arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        
        else    
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=m)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=e)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for(int i=s,k=0;i<=e;i++)
    {
        arr[i]=temp[k++];
    }
}

void merge_sort(vector <int> &arr, int s, int e)
{
    // Base Case
    if(s==e)
        return ;
    int middle= (s+e)/2;
    merge_sort(arr,s,middle);
    merge_sort(arr,middle+1,e);
    return Merge(arr,s,middle,e);
}

int main()
{
    vector <int> arr={6,3,6,3,8,5,3,9,7};
    int i=0;int j=8;
    //before sort
    for(auto x : arr)
        cout<<x<<" ";
    merge_sort(arr,i,j);
    //after sort
    cout<<endl;
    for(auto x : arr)
        cout<<x<<" ";
    return 0;
}