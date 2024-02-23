//05.  Write a program to find GCD _(HCF)_ of two numbers.

#include <stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a,int b, int gcd);

int input()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    return n;
}
int find_gcd(int a, int b)
{
    int temp; // a temporary variable
    while (b != 0) // remainder cannot be zero for a number that is not completely divisible
    {
        temp = b;
        b=a%b; //to check remainder
        a = temp; // divisor is the final answer
    }
    return a;
}
void output(int a,int b, int gcd)
{
    printf("The GCD of two number %d and %d is %d",a,b,gcd);
}
int main()
{
    int a,b,gcd;
    a=input();
    b=input();
    gcd=find_gcd(a,b);
    output(a,b,gcd);
    return 0;
}
