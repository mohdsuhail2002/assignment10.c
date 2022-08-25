#include<stdio.h>
 void printfirstn0dd(int);
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    printfirstn0dd(n);
    printf("\n");
    return 0;
}
 void printfirstn0dd(int num)
{
    int i;
    for(i=1;i<=num*2;i+=2)
    {
        printf("%d\t",i);
    }
}