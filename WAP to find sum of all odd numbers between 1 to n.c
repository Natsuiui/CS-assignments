#include <stdio.h>

int main()
{
    int n;
    printf("Enter till how many integers you want to find ");
    scanf("%d",&n);
    for(int a=0;a<=n;a++){
        if(a%2!=0){
            printf("%d ",a);
        }
    }
return 0;
}