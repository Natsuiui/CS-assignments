//4. WAP to input and print an array using pointers.

#include <stdio.h>

int main(){
    
    int a;
    int *ptr1;
    
    printf("Enter the number of elements\n");
    scanf("%d", &a);

    int ar1[a];
    
    printf("Enter the Elements of an array\n");
    
    ptr1 = ar1;
    for(int i=0; i<a; i++){
        scanf("%d", (ptr1+i));
    }
    
    printf("The elements of the array are\n");
    
    for(int i=0; i<a; i++){
        printf("%d ", *(ptr1+i));
    }
}
