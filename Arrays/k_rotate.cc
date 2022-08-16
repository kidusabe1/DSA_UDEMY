#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> k_rotate(vector <int> v, int k)
{
    vector <int> space={0};
    for(int i=k;i<v.size();i+=k)
    {
        if(i>v.size())
        space.push_back(v[i]);
    }
    return v;
}
int main()
{
    vector <int> v={1,2,3};
    int k=3;
    k_rotate(v,k);
    return 0;
}