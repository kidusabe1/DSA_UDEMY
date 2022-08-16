#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector <char> chars={'k','k','k','k','k','k'};
    string str;
    chars[0]='8';
    for(int i=0;i<chars.size();i++)
    {
        str[i]=chars[i];
    }
    str[6]='9';
    for(int i=0;i<=chars.size();i++)
    {
        cout<<str[i]<<",";
    }
    cout<<str.length();
    return 0;
}