#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int binomial_coefficient(int k)
{
    int res=1;
    for(int i=0;i<=k;i++)
    {
        res*=(res-i);
        res/=(i+1);
    }
    return res;
}
vector<vector<int>> printPascal(int n)
{
    vector<vector<int>> pascal;
        for(int i=0;i<n;i++)
        {
            vector <int> v;
            for(int m=0;m<=i;m++)
            {
                v.push_back(binomial_coefficient(m));
            }
            pascal.push_back(v);
        }   
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<pascal[i][j]<<" ";
        }
        cout<<endl;
    }
 return pascal;
}
int main()
{
    int n;
    cout<<"GIve number of rows\n";
    cin>>n;
    printPascal(n);
    return 0;
}