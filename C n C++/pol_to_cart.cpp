#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int main()
{
    int c;
    float x,y;   // Cartesian coordinates (x,y)
    float r,theta; // polar coordinate(r,theta)

    while(1){

    scanf("%d",&c);

    if(c == 1)
    {

    scanf("%f %f",&x,&y);  // Input value of Cartesian coordinates (x,y) from user

    r=sqrt(x*x+y*y);  // square root function in math.h
    theta= atan(x/y);  // Tan inverse function in math.h

    printf("the value in polar coordinate is(%f,%f)\n\n",r,theta);
    }

    else if(c == 2)
    {

    scanf("%f %f",&r,&theta);  // Input value of polar coordinates (x,y) from user

    x=r*cos(theta);
    y=r*sin(theta);

    printf("the value in Cartesian coordinate is(%f,%f)\n\n",x,y);
    }

    else if(c == 3)
        exit(0);

    else
    printf("Invalid Input");
    }

}
