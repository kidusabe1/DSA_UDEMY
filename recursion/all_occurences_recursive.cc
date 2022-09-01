#include <iostream>
#include <vector>

using namespace std;
vector <int> found;

void helper(int k, vector <int> v, int i)
{
    if(v.size()==i)
    {
        return;
    }
    if(v[i]==k)
    {
        found.push_back(v[i]);
    }
    helper(k,v,i+1);
}

vector <int> all_occurence(int k, vector <int> v)
{

    found.clear();
    helper(k,v,0);
    return found;
}

int main()
{
    vector <int> v={1,2,3,4,5,6,4,2,4};
    cout<<v.size()<<endl;
    vector <int> found=all_occurence(4,v);
    for(auto x : found)
    {
        cout<<x<<" ";
    }
    return 0;
}
