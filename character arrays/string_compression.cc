#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;


int compress(vector<char>& chars) {
    int count=1;
    char ch;
    string str;
    int n=chars.size();
    //cout<<"NNNNNNNNNN= "<<n<<endl;
    int i=0,j=0;
    for(i=0;i<chars.size();i++)
    {
        count=1;
        while(chars[i]==chars[i+1] )
        {
            i++;
            count++;
        }
        str+=chars[i];
        str+=to_string(count);
    }
    chars.clear();
    for(int i=0;i<str.size();i++)
    {
        chars.push_back(str[i]);
    }
    for(int i=0;i<str.size();i++)
    {
        cout<<str[i];
    }
    return chars.size();
}
int main()
{
    vector <char> chars={'k','k','k','k','i','i','i','d','d','d','u',};
    //vector <char> &CHARS=chars;
    compress(chars);
    //cout<<chars<<endl;
    //cout<<CHARS<<endl;
    return 0;
}

