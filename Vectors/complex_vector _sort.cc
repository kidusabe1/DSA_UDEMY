#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int sum(vector <int> s1)
{
    return s1[0]+s1[1]+s1[2];
}
bool compare(pair <string, vector<int>>s1,pair <string, vector<int>>s2)
{
    vector <int> m1=s1.second;
    vector <int> m2= s2.second;
    return sum(m1)>sum(m2);
}
int main()
{
    vector <pair <string,vector <int>>> arr={
        {"kidus",{34,54,76}},
        {"sumit",{56,76,23}},
        {"menya",{65,65,86}}
    };
    sort(arr.begin(),arr.end(),compare);
    for(auto s: arr)
    {
        cout<<s.first;
        cout<<sum(s.second)<<endl;
    }
    return 0;
}