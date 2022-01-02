//6. WAP to swap 2 arrays using pointers.
#include <stdio.h>

int main(){
    
    int a;
    int *ptr1, *ptr2;
    
    printf("Enter the number of elements\n");
    scanf("%d", &a);
    int ar1[a], ar2[a], ar3[a];
    
    printf("Enter the Elements of the first array\n");
    
    ptr1 = ar1;
    for(int i=0; i<a; i++){
        scanf("%d", (ptr1+i));
    }
    
    printf("Enter the Elements of the second array\n");
    
    ptr2 = ar2;
    for(int i=0; i<a; i++){
        scanf("%d", (ptr2+i));
    }
    
    for(int i=0; i<a; i++){
        ar3[i] = *(ptr1 + i);
    }
    
    for(int i=0; i<a; i++){
        ar1[i] = *(ptr2 + i);
    }
    
    for(int i=0; i<a; i++){
        ar2[i] = ar3[i];
    }
    
    printf("The arrays have been swaped\n");
    
    printf("The first array is now\n");
    
    for(int i=0; i<a; i++){
        printf("%d ", ar1[i]);
    }
    
    printf("\nThe second array is now\n");
    
    for(int i=0; i<a; i++){
        printf("%d ", ar2[i]);
    }
    
    
}
