//1. Write a program to find the distance between 2 points

#include <stdio.h>
#include <math.h>

void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main(){
    float x1,x2,y1,y2;
    input(&x1,&y1,&x2,&y2);
    float distance = find_distance(x1,y1,x2,y2);
    output(x1,y1,x2,y2,distance);
}
void input(float *x1, float *y1, float *x2, float *y2){
    printf("x1: \n");
    scanf("%f",x1);
    printf("y1: \n");
    scanf("%f",y1);
    printf("x2: \n");
    scanf("%f",x2);
    printf("y2: \n");
    scanf("%f",y2);
}
float find_distance(float x1, float y1, float x2, float y2){
    float sq1 = (x2 - x1)*(x2 - x1);
    float sq2 = (y2 - y1)*(y2 - y1);
    float dist = sqrt(sq1+sq2);
    return dist;
}
void output(float x1, float y1, float x2, float y2, float distance){
    printf("The distance between point (%f, %f) and (%f, %f) is %f",x1,y1,x2,y2,distance);
}
