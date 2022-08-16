#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char path[100]="SNNNEWE";
    int i=0,x=0,y=0;
    while(path[i]!='\0')
    {
        if(path[i]=='N')
            y++;
        else if(path[i]=='S')
            y--;
        else if(path[i]=='E')
            x++;
        else if(path[i]=='W')
            x--;
        else ;
        i++;
    }
    cout<<"E= "<<x<<endl;
    while(x>0)
    {
        cout<<'E';
        x--;
    }
    while(x<0)
    {
        cout<<'W';
        x++;
    }
    while(y>0)
    {
        cout<<'N';
        y--;
    }
    while(y<0)
    {
        cout<<'S';
        y++;
    }
    return 0;
}