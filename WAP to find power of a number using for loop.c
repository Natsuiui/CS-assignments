#include<stdio.h>

int main()

{
   int a,b,c =1 ;
   printf("Enter the number: \n");
   scanf("%d" , &a);
   printf("Enter the power: \n");
   scanf("%d" , &b);
   for(int i = 0 ; i<b ; i++)
   {
       c=c*a;
   }
   printf("%d" , c);

}