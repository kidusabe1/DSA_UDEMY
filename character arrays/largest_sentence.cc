#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char sentence[1000];
    char largest[1000];
    int n,len;
    cin>>n;
    cin.get();
    while(n--)
    {
        cin.getline(sentence,1000);
        len=strlen(sentence);
        if(len>strlen(largest))
        {
            strcpy(largest,sentence);
        }
    }
    cout<<"The lasrgest string is "<<largest<<endl;
    return 0;
}