//13. WAP to Copy one string to another string using pointers.
#include <stdio.h>

int main(){
    
    int a;
    char *ptr1;
    
    printf("Enter the size of the string\n");
    scanf("%d", &a);
    char str1[a+1], str2[a+1];
    
    printf("Enter the string\n");
    
    ptr1 = str1;
    scanf("%s", ptr1);
    
    for(int i=0; i<a; i++){
        *(str2 + i) = *(ptr1 + i);
    }
    
    printf("The elements have been coppied\n");
    
    printf("The coppied string is\n");
    
    for(int i=0; i<a; i++){
        printf("%c", *(str2+i));
    }
}
