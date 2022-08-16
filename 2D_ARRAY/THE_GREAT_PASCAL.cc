#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int bin_co(int L,int n)
{
    int res=1;
    for(int i=0;i<n;i++)
    {
        res*=(L-i);
        res/=(i+1); 
    }
    return res;
}

vector<vector<int>> pascal(int n)
{
    vector<vector<int>> PASCAL;

    for(int LINE=0;LINE<n;LINE++)
    {
        vector<int> v;
        for(int j=0;j<=LINE;j++)
        {
            v.push_back(bin_co(LINE,j));
        }
        PASCAL.push_back(v);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<PASCAL[i][j]<<" ";
        }
        cout<<endl;
    }
    return PASCAL;
}

int main()
{
    int n;
    cout<<"GIve number of rows\n";
    cin>>n;
    pascal(n);
    return 0;
}