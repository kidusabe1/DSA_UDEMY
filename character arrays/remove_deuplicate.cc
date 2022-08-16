#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

string removeDuplicate(string s)
{
    string n;
    int j=0,flag;
    for(int i=0;i<s.length();i++)
    {
        flag=0;
        for(int k=0;k<n.length();k++)
        {
            if(n[k]==s[i])
            {
                flag=1;
            }    
            
        }
        if(flag!=1)
        {
            n+=s[i];  
        }
    }
    sort(n.begin(),n.end());
    cout<<n.length()<<endl;
    return n;
}


int main()
{
    string s= "kkidsadiiisss";
    string nl;
    //cout<<endl<<nl[0];
    nl=removeDuplicate(s);
    cout<<nl;
    return 0;
}