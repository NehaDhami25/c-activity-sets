//3. Write a program to check if the given number is prime

#include <stdio.h>

int input_number();
int is_prime(int n);
void output(int n, int result);

int main(){
    int n = input_number();
    int result = is_prime(n);
    output(n,result);
}
int input_number(){
    int x;
    printf("Enter num: ");
    scanf("%d",&x);
    return x;
}
int is_prime(int n){
    int res=0;
    for(int i=2;i<n/2+1;i++){
        if(n%i==0){
            res = 1;
        }
    }
    return res;
}
void output(int n, int result){
    if(result==0){
        printf("%d is a prime number.",n);
    }
    else{
        printf("%d is not a prime number.",n);
    }
}