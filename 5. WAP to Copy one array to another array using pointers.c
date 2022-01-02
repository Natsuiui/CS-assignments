// 5. WAP to Copy one array to another array using pointers.
#include <stdio.h>

int main(){
    
    int a;
    int *ptr1;
    
    printf("Enter the number of elements\n");
    scanf("%d", &a);
    int ar1[a], ar2[a];
    
    printf("Enter the Elements of an array\n");
    
    ptr1 = ar1;
    for(int i=0; i<a; i++){
        scanf("%d", (ptr1+i));
    }
    
    for(int i=0; i<a; i++){
        ar2[i] = *(ptr1 + i);
    }
    
    printf("The elements have been coppied\n");
    
    printf("The elements of the new array are\n");
    
    for(int i=0; i<a; i++){
        printf("%d ", ar2[i]);
    }
}
