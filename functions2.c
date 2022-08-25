#include<stdio.h>
#include<math.h>
float si(float,float,float);
int main()
{
    float p,r,t;
    printf("enter the amount,rate and time");
    scanf("%f %f %f",&p,&r,&t);
    si(p,r,t);
    printf("the si is %f",si(p,r,t));
    printf("\n");
    return 0;

}
float si(float principal,float rate,float time)
{  
    float si;
    si=principal*rate*time;
    return si;
}