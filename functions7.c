#include<stdio.h>
int ncombination(int,int);
int fac(int);
int main()
{
    int n,r;
    printf("enter the total number of items and selected items");
    scanf("%d %d",&n,&r);
    ncombination(n,r);
    printf("%d combinations",ncombination(n,r));
    printf("\n");
    return 0;
}
int ncombination(int num, int random)
{
    int c;
    c=fac(num)/(fac(random)*fac(num-random));
    return c;
}
int fac(int val)
{ int f;
    if(val==1)
    {
        return 1;
    }
    f=val*fac(val-1);
    return f;
}