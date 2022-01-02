#include<stdio.h>

int hcf1();
int main()
{       int a,b , lcm , y;
        printf("Enter numbers:\n");
        scanf("%d %d" , &a ,&b);
        y = hcf1(a,b);

        lcm = (a*b)/y;
        printf("LCM of %d and %d is %d" ,a,b, lcm);




}
int hcf1(int num1,int num2)
{
    int greater, hcf=1;

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
    return hcf;
}