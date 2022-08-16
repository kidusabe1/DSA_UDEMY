#include<bits/stdc++.h>
using namespace std;

int pairSticks(vector<int> length, int D)
{
    // your code goes here
    int count;
    sort(length.begin(),length.end());
    int n= length.size();
    for(int i=0, j=i+1;i<n and j<n;)
    {
        if(length[j]-length[i]<=D)
        {
            count++;
            i++;
            j+=2;
            continue;
        }
        j++;
    }
    return count;
}