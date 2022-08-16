#include <bits/stdc++.h>
using namespace std;
void selection(int arr[],int n)
{
    for(int i=0;i<=n-2;i++)
    {
        int min_pos=i;
        //to find out the minimum element
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[min_pos])
            {
                min_pos=j;
            }
        }
        swap(arr[min_pos],arr[i]);
    }
}
int main()
{
    int arr[]={93,132,-34,234,-23444,3,0,1};
    int n= sizeof(arr)/sizeof(int);
    cout<<n<<endl;
    selection(arr,n);
    for(auto x: arr)
    {
        cout<<x<<", ";
    }
    return 0;
}