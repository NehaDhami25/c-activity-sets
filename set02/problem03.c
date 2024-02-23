//03.  Write a program find whether a number is a composite number
//> A Composite number has more than 2 factors.

#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int input_number()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    return num;
}
int is_composite(int n)
{
    if(n<=1)
    {
        return 0;
    }
    else 
    {
    for(int i=2;i<=n/2;i++)
    //n is the number. n/2 shoukd be greater than i in all cases. 
    // i is taken as 2 as 1 and 0 cannot be taken 
    // 1 and 2 are not composite numbers
    {
        if(n%i==0)
        {
            return 1;
        }
    }}
    return 0;
}
void output(int n, int result)
{
    if(result==0)
    {
        printf("%d is a composite number.\n",n);
    }
    else{
        printf("%d is not a composite number.\n",n);
    }
}

int main() 
{
    int number = input_number();
    int result = is_composite(number);
    output(number,result);
    return 0;
} 