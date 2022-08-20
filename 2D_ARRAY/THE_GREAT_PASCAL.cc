#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int binomial_co(int line,int n)
{
    int res=1;
    for(int i=0;i<n;i++)
    {
        res*=(line-i);
        res/=(i+1);
    }
    return res;
}

vector<vector<int>> pascal(int n)
{
    vector<vector<int>> tobe;
    for(int line=0;line<n;line++)
    {
    vector<int> v;
        for(int i=0;i<=line;i++)
        {
            v.push_back(binomial_co(line,i));
        }
    tobe.push_back(v);
    }
    return tobe;
}

int main()
{
    int n;
    cout<<"GIve number of rows\n";
    cin>>n;
    vector<vector<int>> PASCAL=pascal(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<PASCAL[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}