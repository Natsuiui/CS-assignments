int sum1=0,sum2=0;
int even(int a,int n){
    if(a<n){
        if(a%2==0){
            printf("%d ",a);
            sum1=sum1+a;
            even(a+1,n);
        }else{
            even(a+1,n);
        }}}
int odd(int a,int n){
    if(a<n){
        if(a%2!=0){
            printf("%d ",a);
            sum2=sum2+a;
            odd(a+1,n);
        }else{
            odd(a+1,n);
        }}}
int main(){
    int n,a;
    printf("Enter start and end of range ");
    scanf("%d%d",&a,&n);
    even(a,n);
    printf("\nTheir sum is %d\n",sum1);
    odd(a,n);
    printf("\nTheir sum is %d",sum2);
    return 0;
}

