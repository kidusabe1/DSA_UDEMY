#include <iostream>
#include <algorithm>
using namespace std;

// function to find the sum of a sub rectangle
int matrix_sub_array(int arr[][6],int i,int j)
{
    int sum=0;
    for(int I=0;I<=i;I++)
    {
        for(int J=0;J<=j;J++)
        {
            sum+=arr[I][J];
        }
    }
    return sum;
}

int mango_trees(int arr[][6], int N)
{
    int pre[6][6];
    // nested for loop to build the prefix sum at each pre(i,j) coordinate
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(arr[i][j]==0)
                pre[i][j]=0+ matrix_sub_array(arr,i,j);
            else
                pre[i][j]= 1 + matrix_sub_array(arr,i,j);
        }
    }

    // printing the prefix sum for verification
    cout<<"\nTHE PREFIX ARRAY IS\n";
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<pre[i][j]<<",";
        }
        cout<<endl;
    }
    cout<<endl;

    //The next thing to do is to find the sum of each quadrant available and keep track of the maximum of the minimum
    
    int max_min[N*N],s1,s2,s3,s4,k=0;
    
    // creating an array of all the minimums from the 4 smaller quadrants
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            s1=pre[i][j];
            s2=pre[i][5]-s1;
            s3=pre[5][j]-s1;
            s4=pre[5][5]-(s1+s2+s3);

            max_min[k]=s1<s2?s1:s2;
            max_min[k]=max_min[k]<s3?max_min[k]:s3;
            max_min[k]=max_min[k]<s4?max_min[k]:s4;
            k++;
        }
    }

    int final=0;
    for(int x : max_min)
    {
        final=max(final,x);// finding the maximum of the 'minimum' array
    }
    return final;
}



int main()
{
    int arr[][6]={
        {1,1,1,0,0,0},
        {1,0,0,1,1,0},
        {0,1,0,0,0,0},
        {0,1,1,0,0,1},
        {1,0,0,1,1,0},
        {0,1,0,0,0,0}
    };
    int N=6;
    cout<<"The maximum number of trees rahul can get are "<<mango_trees(arr,N)<<endl;
    return 0;
}