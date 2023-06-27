#include<stdio.h>
int main()
{
    int a = 0,n,sum;
    sum=0;
    scanf("%d",&n);
    printf("1+2+3+......+%d",n);
    while(a<=n)
    {
        sum=sum+a;
        a++;
    }

    printf("=%d",sum);
    return 0;
}
