#include<stdio.h>

int main()
{  int p,c,m,b,co ,s, a;
   printf("Enter marks: \n");
   scanf("%d %d %d %d %d",&p,&c,&m,&b,&co);
   s = p+c+m+b+co;
   a = s/5;
   switch(a)
   {
        case 90 ... 100 : printf("A");
                    break;
        case 80 ... 89 : printf("B");
                    break;
        case 70 ... 79 : printf("C");
                    break;
        case 60 ... 69 : printf("D");
                    break;
        case 40 ... 59 : printf("E");
                    break;
        case 0 ... 39 : printf("F");
                    break;
   }
}