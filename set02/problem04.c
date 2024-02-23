//04.  Write a program to find Sum of composite number in an array of different numbers entered by the user.

#include<stdio.h>

int input_array_size()
{
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
     printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++) 
    {
        scanf("%d", &a[i]);
    }
}
 int sum_composite_numbers(int n, int a[n])
 {
    int sum=0;
    for(int i=0;i<n;i++) // to access the array
    {
      if(a[i]>2) // loop repeats for all array elements 
      {
      for(int j=2;j<=a[i]/2;j++) //checking for composite number 
      {
        if(a[i]%j==0)
        {
         sum+=a[i];
         break;
        }
      }
      }
    }
    return sum;
 }
 void output(int sum)
 {
    printf("the sum of composite nummber is %d",sum);

 }
 int main()
 {
    int n,a[100],sum;
    n=input_array_size();
    input_array(n,a);
    sum=sum_composite_numbers(n,a);
    output(sum);
 }