#include <stdio.h>

int main()
{
    int n,fd,ld;
    printf("Enter number ");
    scanf("%d",&n);
    ld=n%10;
    while(n>=10){
        n=n/10;
    }fd=n;
    printf("The first digit is %d and Last digit is %d",fd,ld);
    return 0;
}  