#include <stdio.h>
int sum=0,rem;
int rev(int a){
    if(a){
        rem=a%10;
        sum=sum*10 + rem;
        rev(a/10);
    }else{
       return sum;
}return sum;
}
int ispal(int a,int b){
    if(a==b){
        printf("Number is palindrome");
    }else{
        printf("The number is not palindrome");
    }
}
int main(){
    int a;
    printf("Enter number ");
    scanf("%d",&a);
    rev(a);
    ispal(a,sum);
    return 0;
}