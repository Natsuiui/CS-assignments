#include<stdio.h>
#include<math.h>
int main()

{
  int a,b,d, e,c= 0;

  printf("Enter number in hexadecimal: \n");
  scanf("%d" , &a);
  int size = 0;
  e= a;
    while(e!=0){
        size+=1;
        e/=10;
    }

  for(int i = 0; i<size ; i++)
  {
      b = a%10;
      a= a/10;
      d = pow(16,i);
      c+= b*d;
  }
printf("%d",c);
}