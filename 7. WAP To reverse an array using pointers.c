//7. WAP To reverse an array using pointers.

#include <stdio.h>

int main(){
    
    int a;
    int *ptr1, *ptr2;
    
    printf("Enter the number of elements\n");
    scanf("%d", &a);
    int ar1[a];
    
    printf("Enter the Elements of the first array\n");
    
    ptr1 = ar1;
    for(int i=0; i<a; i++){
        scanf("%d", (ptr1+i));
    }
    
    
    for(int i=a-1; i>=0; i--){
        printf("%d ", *(ptr1+i));
    }
    
    
}
