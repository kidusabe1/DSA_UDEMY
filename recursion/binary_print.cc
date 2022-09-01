#include <bits/stdc++.h>
using namespace std;

vector <string> combo;
void helper(int k, int n,char incomplete[])
{

    if(n==k)
    {
        incomplete[n]='\0';
        combo.push_back(incomplete);
        return ;
    }
    
    if(incomplete[n-1]=='1')
    {
        incomplete[n]='0';
        helper(k,n+1,incomplete);
    }
    if(incomplete[n-1]=='0')
    {
        incomplete[n]='0';
        helper(k,n+1,incomplete);
        incomplete[n]='1';
        helper(k,n+1,incomplete);
    }
    
}


vector<string> binaryStrings(int k){
    char incomplete[k];    

    incomplete[0]='0';
    helper(k,1,incomplete);

    incomplete[0]='1';
    helper(k,1,incomplete);

    return combo;
}

int main()
{
    vector <string> combos=binaryStrings(5);
    for(string combo : combos)
        cout<< combo<<endl;
    return 0;
}