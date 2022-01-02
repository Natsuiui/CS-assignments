//8. WAP to search an array for an element using pointers.
#include <stdio.h>

int main(){
    
    int a, element;
    int *ptr1, *ptr2;
    
    printf("Enter the number of elements\n");
    scanf("%d", &a);
    
    printf("Enter the element to search for\n");
    scanf("%d", &element);
    
    int ar1[a];
    
    printf("Enter the Elements of the first array\n");
    
    ptr1 = ar1;
    for(int i=0; i<a; i++){
        scanf("%d", (ptr1+i));
    }
    
    for(int i=0; i<a; i++){
        if(*(ptr1+i) == element){
            printf("%d is found at index %d", element, i);
        }
    }
    
}
