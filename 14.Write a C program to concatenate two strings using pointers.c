//14.Write a C program to concatenate two strings using pointers.
#include <stdio.h>

int main(){
    
    int a;
    char *ptr1, *ptr2, *ptr3;
    
    printf("Enter the size of the string\n");
    scanf("%d", &a);
    char str1[a+1], str2[a+1], str3[(2*a)+1];
    
    printf("Enter the first string\n");
    
    ptr1 = str1;
    scanf("%s", ptr1);
    
    printf("Enter the second string\n");
    
    ptr2 = str2;
    scanf("%s", ptr2);
    
    ptr3 = str3;
    
    for(int i=0; i<=(2*a); i++){
        if(i<a){
            *(ptr3 + i) = *(ptr1 + i);
            printf("working");
        }else{
            *(ptr3 + i) = *(ptr2 + i);
            printf("working");
        }
    }
    *(ptr3 + 2*a+1) = '\0';
    
    printf("The concatinated string is\n");
    
    for(int i=0; i<(2*a); i++){
        printf("%c", *(ptr3+i));
    }
}
