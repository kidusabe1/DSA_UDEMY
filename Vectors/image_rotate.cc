#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector< vector<int>> matrix={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int n= matrix.size();
    //Here, we are finding the transpose of the matrix, by swaping the ith and jth elements
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    //then we finish it off by finding the reverse of every row
    for(int i=0;i<n;i++)
    {
        reverse(matrix[i].begin(),matrix[i].end());
    }
    //We print it accordingly
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    /*
    This code has a:
    Time Complexity of=> O(N^2){for finding the transpose} + O(N^2){for finding the reverse}
    Space Complexity of=> O(1){Because we are not using any extra space, we are just rotating in place}
    */
    return 0;
}