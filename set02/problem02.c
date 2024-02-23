// 02.  Write a program to find if a triangle is scalene.
// A triangle is scalene if all the three sides of the triangle are not equal to one another

#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int input_side()
{
    int x;
    printf("enter side: \n");
    scanf("%d",&x);
    return x;
}

int check_scalene(int a, int b, int c)
{
    if (a!=b && b!=c && a!=c)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}


void output(int a, int b, int c, int isscalene)
{
    if(isscalene==1)
    {
        printf("the triangle is scalene");
    }
    else
    {
        printf("the triangle is not scalene");
    }
}

int main()
{
    int a, b, c;
    a=input_side();
    b=input_side();
    c=input_side();
    int isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}