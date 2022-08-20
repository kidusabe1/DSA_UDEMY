#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sum(vector<vector<int>> v, int sr, int sc, int er, int ec){
    int ans=0;
    vector<vector<int>> pref;
    int rows=v.size();
    int cols=v[0].size();

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            if(i>0)
                v[i][j] += v[i-1][j];
            
            if(j>0)
                v[i][j] += v[i][j-1];
            
            // subtract the twice counted portion
            if(i>0 && j>0)
                v[i][j] -= v[i-1][j-1];
        }
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
    return ans;
}

int main()
{
    vector<vector<int>> v={
        {1,1,1,1},
        {1,1,1,1},
        {1,1,2,1},
        {1,1,1,1}
    };
    int res=sum(v,1,1,3,3);
    cout<<res;
    return 0;
}