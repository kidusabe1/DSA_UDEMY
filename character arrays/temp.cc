#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[]={'a','b','c','\0'};
    char sentence[100];
    //strlen gives us the exact number of visible characters we have
    // while sizeof() gives us strlen()+1 because it counts the null charcater 
    cout<<a<<endl<<strlen(a)<<endl<<sizeof(a)<<endl;

    char temp= cin.get(); int len=0;
    while (temp!='\n')
    {
        sentence[len++]=temp;
        temp=cin.get();
    }
    //sentence[len]='\0';
    cout<<endl<<len<<endl<<sentence<<endl;
    return 0;
}