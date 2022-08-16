#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    int n=A.size();
    int s=0,e=n-1,middle,answer=-1;

    while(s<=e)
    {
        middle=(s+e)/2;
        if(A[middle]>Val)
        {
            e=middle-1;
        }
        else
        {
            answer= A[middle];
            s=middle+1;
        }
    }    
    return answer;
    
}
/*
#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    
    int sz = A.size();
    
    int l = 0, r = (sz-1);
    
    int answer = -1;
    
    while (l <= r) {
        int mid = (l + r) / 2;
        if (A[mid] > Val) {
            r = mid-1;
        }
        else {
            answer = A[mid];
            l = mid+1;
        }
    }
    
    return answer;
    
}*/
int main()
{
    vector<int> A={1,2,3,4,5,6,7,8};
    int Val=9;
    int m=lowerBound(A,Val);
    cout<<m;
    return 0;
}