#include<stdio.h>
int fac(int);
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    fac(n);
    printf("factorial is %d",fac(n));
    printf("\n");
    return 0;
}
int fac(int num)
{ int f;
    if(num==1)
    {
        return 1;
    }
     f=num*fac(num-1);
     return f;
}