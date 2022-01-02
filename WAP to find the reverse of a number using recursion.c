#include <stdio.h>
int sum=0,rem;
int rev(int a){
    if(a){
        rem=a%10;
        sum=sum*10 + rem;
        rev(a/10);
    }else{
       return sum;
}}
int main(){
    int a;
    printf("Enter number ");
    scanf("%d",&a);
    rev(a);
    printf("The reverse of the number is %d",sum);
    return 0;
}