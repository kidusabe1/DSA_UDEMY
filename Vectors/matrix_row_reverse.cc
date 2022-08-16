#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <vector <int>> matrix={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int n= matrix.size();
    int m=matrix[0].size();
    for(int i=0,j=m-1;i<j;i++,j--)// I dont know why the condition is i<j???????????!!!!!!!!!!
    /*
        Because, if you visualize the algorithm, you are swapping elements from both ends, and therefore has to stop as soon as i<j!!!!!
    */
    {
        int p=0;
        for(;p<n;p++)
        {
            swap(matrix[p][i],matrix[p][j]);
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}