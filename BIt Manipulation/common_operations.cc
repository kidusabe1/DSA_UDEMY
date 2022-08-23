#include <iostream>
using namespace std;

int find_Ith_bit(int n, int i)
{
    int flag=(1<<i);
    return (flag&n)==0?0:1;
}

void set_Ith_Bit(int &n,int i)
{
    int flag=(1<<i);
    n= (n|flag);
}

void clear_Ith_bit(int &n,int i)
{
    int flag= (1<<i);
    flag=(~flag);
    n=(n&flag);
}

void update_Ith_bit(int &n,int i,int u)
{
    if(u==1)
    {
        int flag= (1<<i);
        n=(n|flag);
    }

    if(u==0)
    {
        int flag=~(1<<i);
        n=(flag&n);
    }
}

void clear_last_Ibits(int &n,int i)
{
    int mask= (-1<<i);
    n=(n&mask);
}

void clear_IJrange_ofBits(int &n, int i, int j)
{
    int flagA= (~0<<j+1);
    int flagB=~(~0<<i);
    int FLAG= (flagA|flagB);
    n=(n&FLAG);
}
int main()
{
    int n,i,j;
    printf("give the number and the which bit you want to find, respectively\n");
    scanf("%d%d",&n,&i);
    printf("The %d bit of %d is %d\n",i,n,find_Ith_bit(n,i));
    int &N=n;
    set_Ith_Bit(N,i);
    printf("By setting the %d bit of your given number, we get %d",i,N);
    printf("\ngive the number and the bit which you want to clear, respectively\n");
    scanf("%d%d",&n,&i);
    clear_Ith_bit(n,i);
    printf("By clearing the %d bit of your given number, we get %d",i,n);
    printf("\ngive the number, the bit which you want to replace and the number u want to change it to, respectively\n");
    int u;
    scanf("%d%d%d",&n,&i,&u); m,,
    update_Ith_bit(n,i,u);
    printf("By updating the %d bit of your given number with %d, we get %d",i,u,n);
    printf("\ngive the number and the starting bit which you want to clear to the last, respectively\n");
    scanf("%d%d",&n,&i);
    clear_last_Ibits(n,i);
    printf("By clearing the last %d bits of your given number, we get %d",i,n);
    printf("\ngive the number and the starting bit which you want to clear");
    printf("and until which bit do you want to clear?, respectively\n");
    scanf("%d%d%d",&n,&i,&j);
    clear_IJrange_ofBits(n,i,j);
    printf("By clearing the bits from %d to %d of your given number, we get %d",i,j,n);
    return 0;
}