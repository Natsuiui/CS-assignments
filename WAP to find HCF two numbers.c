#include<stdio.h>

int main()

{  int num1 , num2;
   int greater, hcf=1;
   printf("Enter the number: \n");
   scanf("%d" , &num1);
   printf("Enter the power: \n");
   scanf("%d" , &num2);

    if(num1>num2){
        greater = num1;
    }else{
        greater = num2;
    }
    for(int i=1; i<=greater/2; i++){
        if(num1%i==0 && num2%i == 0){
            hcf = i;
        }
    }
printf("%d" , hcf);
}