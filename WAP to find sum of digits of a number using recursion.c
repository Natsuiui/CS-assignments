#include <stdio.h>
int sum(int n,int s){
    int i,k;
    k=n%10;
    i=n/10;
    s=s+k;
    if(i!=0){
        sum(i,s);
    }else{
        printf("The sum of digits is %d",s);
    }
}
int main(){
    int n,s=0;
    printf("Enter number ");
    scanf("%d",&n);
    sum(n,s);
    return 0;
}