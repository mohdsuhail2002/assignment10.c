#include<stdio.h>
int narrangement(int,int);
int fac(int);
int main()
{
    int n,r;
    printf("enter the total number of items and selected items");
    scanf("%d %d",&n,&r);
    narrangement(n,r);
    printf("%d arrangement",narrangement(n,r));
    printf("\n");
    return 0;
}
int narrangement(int num, int random)
{
    int p;
    p=fac(num)*fac(num-random);
    return p;
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