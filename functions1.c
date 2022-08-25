#include<stdio.h>
#include<math.h>
float areacircle(float);
int main()

{ 
    float r;
    printf("enter the radius of the circle");
    scanf("%f",&r);
    areacircle(r);
    printf("area of circle having radius %f is %f",r,areacircle(r));
    printf("\n");
    return 0;
}
float areacircle(float radius)
{
    float area;
    area=3.14*pow(radius,2);
    return area;
}