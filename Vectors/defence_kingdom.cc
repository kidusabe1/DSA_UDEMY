#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll =long long;

int defkin( vector <pair <int,int>> plane, int w, int h)
{
    //initializing two vectors x and y to store the x and y coordinates respectively
    vector <ll> x,y;
    x.push_back(0); y.push_back(0);
    //stroing the coordinates
    for(int i=0;i<plane.size();i++)
    {
        x.push_back(plane[i].first);
        y.push_back(plane[i].second);
    }
    //sorting both the x and y independent arrays
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    //intializing two long long variables with INT_MIN 
    ll maxx= INT_MIN, maxy=INT_MIN;
    //finding the gap between each successive coordinates "The LAST -1 IS BECAUSE THE COORDINATE WE ARE SUBCTRACTING FROM IS INCLUDED ALTHOUGH IT IS NOT A PENALITY ZONE"
    for(int i=0;i<x.size();i++)
    {
        //FINDING THE MAX OF MAXX AND THE GAP(DIFFERENCE) BETWEEN X[I] AND X[I-1]
        maxx=max(maxx, x[i]-x[i-1]-1);
    }

    for(int i=0;i<y.size();i++)
    {
        maxy=max(maxy,y[i]-y[i-1]-1);
    }
    //HERE WE ARE FINALLY FINDING THE GAP BETWEEN THE LAST ELEMENT AND THE TOP MOST AND RIGHT MOST BORDERS!
    maxx= max(maxx,w-x[x.size()-1]-1);
    maxy=max(maxy, h-y[y.size()-1]-1);

    return maxx*maxy;
} 

int main()
{
    vector <pair <int,int>> plane={
        {3,8},
        {11,2},
        {8,6}
    };
    cout<<"The penality region is "<<defkin(plane,15,8);
    return 0;
}