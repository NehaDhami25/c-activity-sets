// 01.  Write a program to find the area of a triangle.

#include <stdio.h>

void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);


void input(float *base, float *height)
{   
    printf("enter the base of the triangle: \n");
    scanf("%f",base);
    printf("enter the height of the triangle: \n");
    scanf("%f",height);
}
void find_area(float base , float height, float *area)
{
    *area=base*height;
}
void output(float base, float height, float area)
{
    printf("the area of the triangle is %f",area);
}

int main()
{
    float base,height,area;
    input(&base,&height);
    find_area(base,height,&area);
    output(base,height,area);
    return 0;
}