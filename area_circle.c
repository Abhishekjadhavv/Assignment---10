// Write a function to calculate the area of a circle. (TSRS)

#include<stdio.h>
float areaOfCircle(int);
int main(){

    float area_of_circle;
    int radius;

    printf("Enter radius of circle\n");
    scanf("%d",&radius);

    area_of_circle = areaOfCircle(radius);

    printf("Area of circle is %f",area_of_circle);

    return 0;
}

float areaOfCircle(int radius){
   return 3.14*(radius*radius);
}