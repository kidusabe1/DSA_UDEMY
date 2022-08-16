#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector< vector<int>> v={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int STOP=4+4,flag=0;
    int m=0,n=3,key=8;
    if(key>v[3][3] || key<v[0][0])
        cout<<"NOT FOUND!\n";
    while (STOP>=0 && flag!=1)
    {
        if(key<v[m][n])
        {
            n--;
        }
        else if(key>v[m][n])
        {
            m++;
        }
        else if(key==v[m][n])
        {
            flag=1;
            cout<<key<<" is found at index ["<<m<<"]["<<n<<"]\n";
        }
        STOP--;
    }
    return 0;
}