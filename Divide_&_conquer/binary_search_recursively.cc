#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int helper_partition(vector<int> &v,int start, int end,int x)
{
    /*
    if(v[end]!=x)
        return ;
    if((v[end]==x))
        return end;
    int middle = (start+end)/2;
    helper_partition(v,start,middle-1,x);
    helper_partition(v,middle+1,end,x);
*/
    int middle= (start+end)/2;
    if(v[middle]==x)
        return middle;
    if(x<v[middle])
        return helper_partition(v,start,middle-1,x);
    else
        return helper_partition(v,middle+1,end,x);

}       

int binarySearch(vector<int> &v, int x)
{
    int end= v.size()-1;
    int index=helper_partition(v,0,end,x); 
    return index;
}

int main()
{
    vector <int> v={1,2,3,4,5,6,7,8,9};
    cout<<v.size()-1<<endl;
    int locate= binarySearch(v,9);
    cout<<locate;
    return 0;
}