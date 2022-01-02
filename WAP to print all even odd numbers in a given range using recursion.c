int even(int a,int n){
    if(a<n){
        if(a%2==0){
            printf("%d ",a);
            even(a+1,n);
        }else{
            even(a+1,n);
        }
    }
}
int odd(int a,int n){
    if(a<n){
        if(a%2!=0){
            printf("%d ",a);
            odd(a+1,n);
        }else{
            odd(a+1,n);
        }
    }
}
int main(){
    int n,a;
    printf("Enter start and end of range ");
    scanf("%d%d",&a,&n);
    printf("The even numbers are ");
    even(a,n);
    printf("\nThe odd numbers are ");
    odd(a,n);
    return 0;
}
