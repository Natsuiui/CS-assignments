//3. WAP to swap 2 numbers using pointers.

#include <stdio.h>

int main()
{
    int a = 10, b = 11, c, *ptr1, *ptr2;
    
    printf("Before swap:-\n");
    printf("A is %d\n", a);
    printf("B is %d\n", b);
    
    ptr1 = &a;
    ptr2 = &b;
    
    c = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = c;
    
    printf("After swap:-\n");
    printf("A is %d\n", a);
    printf("B is %d\n", b);
    
    printf("%d + %d is %d", *ptr1, *ptr2, *ptr1+*ptr2);
    
}
