#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int spiral[][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
        };
    int n=3,m=4;
    int start_row=0,start_col=0,end_row=2,end_col=3;
    // The condition given is that, the while loop ahs to go on as long as 
    // both the starting row and column are less than or equal(converging, 
    //happens when they are odd numbered) 
    while(start_row<=end_row && start_col<=end_col)    
    {
        for(int i=start_row;i<=end_col;i++)//prints the first row
            cout<<spiral[start_row][i]<<" ";
        for(int i=start_row+1;i<=end_row;i++)//prints the end column
            cout<<spiral[i][end_col]<<" ";  
        for(int i=end_col-1; i>=start_col;i--)//prints the end row
        {
            if(start_row==end_row)// this condition checks if the row has converged or not
                break;//if it is, then it has already been printed in the upper first row
            cout<<spiral[end_row][i]<<" ";
        }
        for(int i=end_row-1;i>=start_row+1;i--)//prints the firstv column
        {
            if(start_col==end_col)//checks if the column has converged or not
                break;//if so, no need to print it again, bc it's been already been printed in the first column
            cout<<spiral[i][start_col]<<" ";
        }
        //we are moving on to the following cycle
        start_col++;
        start_row++;
        end_col--;
        end_row--;     
    }

    return 0;
}