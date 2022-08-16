#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
    int first_row=0,end_row=m, column=n-1;
    int i=m,j=n;
    vector <int> wave;
    while(column>=0)
    {
        for(int k=first_row;k<m;k++)
            wave.push_back(arr[k][column]);
        column--;

        for(int k=end_row-1;k>=first_row;k--)
            wave.push_back(arr[k][column]);
        column--;
    }
    return wave;
}
int main()
{
    vector< vector<int>> mat={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    WavePrint(4,4,mat);
    return 0;
}
