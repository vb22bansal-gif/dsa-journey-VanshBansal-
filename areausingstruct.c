//WAP to create a structure which can calculate the area and parameter of an rectangle
#include<stdio.h>
struct calculation{
float area;
float parameter;
};
int main(){
    float l, b;
    struct calculation s;
    printf("Enter length and breadth of rectangle: ");
 
    scanf("%f %f", &l, &b);
    s.area = l * b;
    s.parameter = 2 * (l + b);
    printf("Area: %f\n", s.area);
    printf("Perimeter: %f\n", s.parameter);
    return 0;
} 