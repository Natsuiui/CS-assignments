#include <stdio.h>

int main()
{   int n ,s, x;
    printf("How many digits does your number have ");
    scanf("%d", &s);
    int arr[s];
    int brr[s];
    printf("Enter number: \n");
    scanf("%d", &n);
    for(int i = 0 ;i<s ; i++)
    {
        x = n%10;
        arr[i] = x;
        n = n - x;
        n = n/10;
    }
    brr[0]=arr[0];
    brr[s-1] = arr[s-1];
    for(int i = 1 ; i<s-1 ; i++)
    {
        brr[i] = arr[s-i-1];
    }
    for(int i = 0 ;i<s ; i++)
    {
        printf("%d" , brr[i]);
    }
    return 0;
}