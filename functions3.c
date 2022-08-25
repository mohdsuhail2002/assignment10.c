#include<stdio.h>
int iseven(int);
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    iseven(n);
    if(iseven(n)==1)
    {
        printf("the number is even");
    }
    else
    {
        printf("not even");
    }
    printf("\n");
    return 0;
}
int iseven(int num)
{
    if(num%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}