//4. Write a C program to add two numbers using **pass by reference**

#include <stdio.h>
void input(int *a, int *b);
void add(int a, int b, int *sum);
void output(int a, int b, int sum);

void input(int *a, int *b)
{
    printf("enter the value of the first number: \n");
    scanf("%d", a);
    printf("enter the value of the second number: \n");
    scanf("%d", b);
}

void add(int a, int b, int *sum)
{
    *sum = a+b;
}

void output(int a, int b, int sum)
{
    printf("the sum is %d." ,sum);
}

int main()
{
    int a,b;
    int sum=0;
    input(&a,&b);
    add(a,b,&sum);
    output(a,b,sum);
    return 0;
}