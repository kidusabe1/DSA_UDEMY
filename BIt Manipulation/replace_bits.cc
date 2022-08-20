#include <iostream>
using namespace std;

/*
Given M and N of 32 bits, with range from i to j, replace the bits
found in i-j inside N with the bits of M.
i.e M will be a substring of N 
*/
//////////                 The Algorithm You follow                       /////////
/* 
    1. clear the bits from i to j inside N
    2. we left shift M by a factor of i
    3. we perform the or(|) operation between M and N. 
*/

void clear_IJrange_ofBits(int &n, int i, int j)
{
    int flagA= (~0<<j+1);
    int flagB=~(~0<<i);
    int FLAG= (flagA|flagB);
    n=(n&FLAG);
}

void replace_bits(int &M,int &N, int i,int j)
{
    clear_IJrange_ofBits(N,i,j);
    M= (M<<i);
    N=(N|M);
}

int main()
{
    int N,M,i,j;
    printf("\ngive the two numbers and the starting bit which you want to clear");
    printf("and until which bit do you want to clear?, respectively\n");
    scanf("%d%d%d%d",&M,&N,&i,&j);
    replace_bits(M,N,i,j);
    printf("By replacing the bits you specified in N, we get %d",N);
    return 0;
}