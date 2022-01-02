//2. WAP to add 2 numbers using pointers.

#include <stdio.h>

int main()
{
    int a, b, *ptr1, *ptr2;
    
    printf("Enter the two numbers\n");
    scanf("%d%d", &a, &b);
    
    ptr1 = &a;
    ptr2 = &b;
    
    printf("%d + %d is %d", *ptr1, *ptr2, *ptr1+*ptr2);
    
}
