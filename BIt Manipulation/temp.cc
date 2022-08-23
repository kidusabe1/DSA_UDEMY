#include <iostream>
#include <algorithm>

using namespace std;

bool arePermutation(string A, string B)
{
    int sum1=0,sum2=0;
    for(int i=0;i<A.length();i++)
    {
        sum1+=int(A[i]);
        sum2+=int(B[i]);
    }
    if(sum1==sum2)
        return true;
    else
        return false;
}


int main()
{
    string A= "1234";
    string B= "1235";
    if(arePermutation(A,B)==true)
    {
        printf("True\n");
    }
    else{
        printf("False\n");
    }

    return 0;
}