// 3. Write a C program to add two numbers using **pass by value**

#include <stdio.h> 
int input();
int add(int a, int b);
int output(int a, int b, int sum);

int input()
{
    int x;
    printf("enter the number:\n");
    scanf("%d",&x);
    return x; 
}

int add(int a, int b)
{
    int sum=a+b;
    return sum;
}

int output(int a, int b, int sum)
{
    printf("the sum is %d \n",sum);
}

int main()
{
    int a=input();
    int b=input();
    int sum=add(a,b);
    output(a,b,sum);
    return 0;
}