#include<stdio.h>
 void printfirstn(int);
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    printfirstn(n);
    printf("\n");
    return 0;
}
 void printfirstn(int num)
{
    int i;
    for(i=1;i<=num;i++)
    {
        printf("%d\t",i);
    }
}