#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int rotated_search(vector <int> v, int x)
{
    int n=v.size();
    int s=0;
    int e=n-1;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if(v[mid]==x)
        {
            return mid;
        }

        if(v[s]<=v[mid]) // line 1
        {
            if(x<v[mid] && x>=v[s])
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }

        else 
        {
            if(x<=v[e] && x>v[mid])
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
    }
     return -1;

}

int main()
{
    vector <int> v={5,6,7,0,1,2,3,4};
    cout<<rotated_search(v,5);
    return 0;
}