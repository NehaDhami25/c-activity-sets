//7. Write a program to find the length of a line

#include <stdio.h>
#include <math.h>

typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point(){
    Point p;
    printf("co-ord x:\n"); 
    scanf("%f",&p.x);
    printf("co-ord y:\n");
    scanf("%f",&p.y);
    return p;
}

Line input_line(){
    Line l;
    printf("P1\n");
    l.p1 = input_point();
    printf("P2\n");
    l.p2 = input_point();
    return l;
}

void find_length(Line *l){
    float sq1 = ((l->p2.x)-(l->p1.x))*((l->p2.x)-(l->p1.x));
    float sq2 = ((l->p2.y)-(l->p1.y))*((l->p2.y)-(l->p1.y));
    float dist = sqrt(sq1+sq2);
    l->distance = dist;
}

void output(Line l){
    printf("%f",l.distance);
}

int main(){
    Line l = input_line();
    find_length(&l);
    output(l);
}