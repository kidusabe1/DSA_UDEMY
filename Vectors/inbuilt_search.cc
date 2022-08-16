#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector <int> arr={1,2,3,4,5,6,7,8,9};
    int key;
    int sequence[]={3,4,5};
    cin>>key;
    vector <int> :: iterator ite;
    ite=find(arr.begin(),arr.end(),key);
    int index= ite- arr.begin();
    if(ite==arr.end())
        cout<<"NOT FOUND!\n";
    else
        cout<<key<<" IS FOUND AT index"<<index<<endl;
    ite= search(arr.begin(),arr.end(),sequence,sequence+2);
    index= ite-arr.begin();
    if(ite==arr.end())
        cout<<"SEQUENCE NOT FOUND\n";
    else
        cout<<"SEQUENCE FOUND AT "<<index<<endl;
    return 0;
}