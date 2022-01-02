#include<stdio.h>

int main()
{   int a ,b;
    printf("Enter a number: \n");
    scanf("%d" , &a);
    if(a%2 == 0)
    {
        printf("2 \n");
    }
    for(int i = 1 ; i<=a/2 ; i++)
    {
        if(a%i==0)
        {
          for(int j = i-1 ; j>1 ;j--)

           {
             if(i%j != 0)
             {
                 b = i;
             }
             else
             {
                 b = 0;
                 break;
             }
           }
           if(b==0)
           {
               continue;
           }
           else
            {printf("%d \n" , b);}

        }
    }
}