#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge_sort_rows(int i,vector<vector<int>> &temp,int cs, int cm,int ce)
{
    int f=cs;
    int j=cm+1;
    vector<int> line;
    while(f<=cm && j<=ce)
    {
        if(temp[i][f]<temp[i][j])
            line.push_back(temp[i][f++]);
        else
            line.push_back(temp[i][j++]);
    }
    while(f<=cm)
        line.push_back(temp[i][f++]);
    while(j<=ce)
        line.push_back(temp[i][j++]);
    for(int f=cs,k=0;f<=ce;f++)
    {
        temp[i][f]=line[k++];
    }
    return ;   // Why this return again??????
}

void merge_sort_columns(int i,vector<vector<int>> &temp,int rs,int rm, int re)
{
    int f=rs;
    int j=rm+1;
    vector <int> line;
    while(f<=rm && j<=re)
    {
        if(temp[f][i]<temp[j][i])
            line.push_back(temp[f++][i]);
        else
            line.push_back(temp[j++][i]);
    }

    while(f<=rm)
        line.push_back(temp[f++][i]);
    while(j<=re)
        line.push_back(temp[j++][i]);
    for(int f=rs,k=0;f<=re;f++)
        temp[f][i]=line[k++];
    
    return ;
}


void merge(int m,int n,vector<vector<int>> &temp,int rs,int rm,int re,int cs, int cm,int ce)
{
    // first we iterate through the rows
    for(int i=rs;i<=re;i++)
    {
        merge_sort_rows(i,temp,cs,cm,ce);
    }

    for(int i=cs;i<=ce;i++)
    {
        merge_sort_columns(i,temp,rs,rm,re);
    }
    return ;
}

void merge_sort_dividends(int m, int n, vector<vector<int>> &temp,int rs, int re, int cs, int ce)
{   
    if(rs>=re && cs>=ce)
        return ;
    
    int rm=(rs+re)/2;
    int cm= (cs+ce)/2;

    merge_sort_dividends(m,n,temp,rs,rm,cs,cm);
    merge_sort_dividends(m,n,temp,rm+1,re,cs,cm);
    merge_sort_dividends(m,n,temp,rs,rm,cm+1,ce);
    merge_sort_dividends(m,n,temp,rm+1,re,cm+1,ce);

    merge(m,n,temp,rs,rm,re,cs,cm,ce);
    return ;   // WHat is the fucntion of return in this line????? I really dont know.......
}

vector<vector<int>> Merge_Sort(int m, int n, vector<vector<int>> &v)
{
    int rs=0;
    int re=m-1;
    int cs=0;
    int ce=n-1;
    merge_sort_dividends(m,n,v,rs,re,cs,ce);
    return v;
}


int main()
{
    vector<vector<int>> twoDarray={
        {4,6,2,8},
        {6,2,7,9},
        {5,8,3,7},
        {0,2,0,2}
    };
    vector<vector<int>> sorted=Merge_Sort(4,4,twoDarray);
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<sorted[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}