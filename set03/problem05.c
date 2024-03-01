//5. Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.

#include <stdio.h>

int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int main(){
    int n = input_array_size();
    int a[n];
    init_array(n,a);
    erotosthenes_sieve(n,a);
    output(n,a);
}
int input_array_size(){
    int x;
    printf("Enter n: ");
    scanf("%d",&x);
    return x;
}
void init_array(int n, int a[n]){
    int j=0;
    for(int i=2;i<=n;i++){
        a[j]=i;
        j++;

    }
}
void erotosthenes_sieve(int n, int a[n]){
    for(int i=2,j=0; j<n,i<n; i++,j++){
        if(a[j]==0){
            continue;
        }
        else{
            for(int k=0;k<n;k++){
                if(a[k]%i==0&&a[k]!=i){
                    a[k]=0;
                }
            }
        }
    }
    
    
}

void output(int n, int a[n]){
    for(int i=0;i<n;i++){
        if(i>0&&a[i]!=0){
            printf(", ");
        }
        if(a[i]!=0){
            printf("%d",a[i]);
        }
        
    }
}