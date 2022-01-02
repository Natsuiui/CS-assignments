//12. WAP to find length of a string using pointers.

#include <stdio.h>

int main()
{
    int n, count=0;
    char str[1000], *ptr;
    
    scanf("%s", str);
    ptr = str;
    for(int i=0; i<1000; i++){
        if(*(ptr+i) == '\0'){
            count = i;
            break;
        }
    }
    
    printf("%d ", count);
    
}
