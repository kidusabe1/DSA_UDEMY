#include <iostream>
using namespace std;
// This fucntion checks if the last bit is one or zero
// For 1, it is odd
// For 0, it is even
int evenodd(int n)
{
    int count=0,rem,qou,arr[100];
    while(n!=1)
    {
        rem=n%2;
        arr[count]=rem;
        count++;
        n=n/2;
    }
    if(arr[0]==1)
        return 1;
    if(arr[0]==0)
        return 0;
    else
        return -1;

}

int main()
{
    printf("%d",evenodd(12));
    int n;
    printf("please give a value: ");
    scanf("%d",&n);
    if(n&1==1)
        printf("%d is odd",n);
    else
        printf("%d is even",n);
    return 0;
}