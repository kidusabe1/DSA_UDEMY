#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr={
        {1,2,3},
        {1,3,3},
        {0,4,6}
    };
    int n=arr.size();
    vector<int> r,c;
//I created two new dynamic arrays to store the indexes where we find the zeroes
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==0)
            {
                r.push_back(i);
                c.push_back(j);
            }
        }
    }
//here we are traversing through the the row where we found a zero...
    for(int x: r)
    {
        for(int i=0;i<n;i++)
        {
            arr[x][i]=0;
        }
    }
//and here we are traversing through the column where we found a zero...
    for(int y: c)
    {
        for(int i=0;i<n;i++)
        {
            arr[i][y]=0;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}