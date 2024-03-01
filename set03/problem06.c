//6. Write a program to find the index of a substring of a string

#include <stdio.h>

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

int main(){
    char a[100],b[100];
    input_string(a,b);
    int index=sub_str_index(a,b);
    output(a,b,index);
}
void input_string(char* a, char* b){
    printf("string: ");
    scanf("%s",a);
    printf("substring: ");
    scanf("%s",b);
}
int sub_str_index(char* string, char* substring){
    int index=-1;
    for(int i=0;string[i]!='\0';i++){
        if(string[i]==substring[0]){
            int match = 1;
            for(int j=1;substring[j]!='\0';j++){
             
                if(substring[j]!=string[j+i]){
                    match=0;
                    break;
                }
                else{
                    index = i;
                }
            }
            if(match){
                index=i;
                break;
            }
        }
    }
    return index;
}
void output(char *string, char *substring, int index){
    if(index==-1){
        printf("substring doesn't match!");
    }
    else{
        printf("The index of '%s' in '%s' is %d",substring,string,index);
    }

}