//9.Write a C program to find the [square root]of a number.

#include<stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main()
{
    float n , sqrroot;
    n=input();
    sqrroot=square_root(n);
    output(n,sqrroot);
    return 0;
}
float input()
{
    float n ;
    printf("Enter a number: \n");
    scanf("%f",&n);
    return n;
}

// if the guess is close to the square root which means the number and the square of guess 
// have a difference less than epsilon. all negative numbers are always less than epsilon .

float square_root(float n){
    float x=n/100;
    float epsilon=0.000001;
       
    while (fabs(x*x-n)>epsilon)
    {
      x=0.5*(x+n/x);
    }
    return x;
}

void output(float n , float sqrroot)
{
    printf("Square root of %f is %f",n,sqrroot);
}