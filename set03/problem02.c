//2. Write a program to find whether the given 3 points form a triangle

#include <stdio.h>
#include <math.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3){
    printf("x1: ");
    scanf("%f",x1);
    printf("y1: ");
    scanf("%f",y1);
    printf("x2: ");
    scanf("%f",x2);
    printf("y2: ");
    scanf("%f",y2);
    printf("x3: ");
    scanf("%f",x3);
    printf("y3: ");
    scanf("%f",y3);
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3){
    float sq1 = sqrt((x2 - x1)*(x2 - x1)+(y2 - y1)*(y2 - y1));
    float sq2 = sqrt((x3 - x2)*(x3 - x2)+(y3 - y2)*(y3 - y2));
    float sq3 = sqrt((x1 - x3)*(x1 - x3)+(y1 - y3)*(y1 - y3));
    if(sq1+sq2>sq3&&sq2+sq3>sq1&&sq3+sq1>sq2){
        return 1;
    }
    else{
        return 0;
    }
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result){
    if(result){
        printf("The points (%f, %f), (%f, %f) and (%f, %f) form a triangle.",x1,y1,x2,y2,x3,y3);
    }
    else{
        printf("The points (%f, %f), (%f, %f) and (%f, %f) do not form a triangle.",x1,y1,x2,y2,x3,y3);
    }
}
int main(){
    float x1,x2,y1,y2,x3,y3;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    int result = is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
}
