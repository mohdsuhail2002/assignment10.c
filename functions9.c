#include<stdio.h>
int givendigit(int);
int main()
{
    int x,t;
    printf("enter a number");
    scanf("%d",&x);
    t=givendigit(x);
    if(t==0)
    {
        printf("in given number");
    }
    else if(t==1)
    {
        printf("given digit is not in given number");
    }
    printf("\n");
    return 0;

}
int givendigit(int n)
{
    int num,y;
    printf("enter the given number");
    scanf("%d",&num);
    while(n>0)
    {
        y=n%10;
        if(y==num)
        {
            return 0;
        }
        n=n/10;

    }
    return 1;
    
}