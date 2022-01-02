#include <stdio.h>

int main()
{
    int a;
    printf("Enter the multiplication table you want ");
    scanf("%d",&a);
    for(int i=1;i<=12;i++){
        printf("%d ",a*i);
    }
return 0;
}