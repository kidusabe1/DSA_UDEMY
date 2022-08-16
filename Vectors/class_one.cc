#include <iostream>
#include "vector.h"
#include <vector>
using namespace std;
int main()
{
    /*
    VECTOR <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    //v.pop_back();
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<",";
    }
    */
    VECTOR <char> n;
    n.push_back('a');
    n.push_back('b');
    cout<<n.size()<<endl;
    n.push_back('e');
    n.push_back('b');
    n.push_back('e');
    for(int i=0;i<n.size();i++)
    {
        cout<<n[i]<<endl;
    }
    return 0;
}