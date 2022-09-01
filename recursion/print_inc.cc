#include <iostream>
#include <vector>
using namespace std;

vector <int> nums;

void helper(int n)
{
    if(n==0)
    {
        return;
    }
    helper(n-1);
    nums.push_back(n);
}

vector <int> print_increasing(int n)
{
    nums.clear();
    helper(n);
    return nums;
}

int main()
{
    int n=9;
    vector<int> nums=print_increasing(n);
    for(auto x : nums)
    cout<<x<<" ";
    return 0;
}