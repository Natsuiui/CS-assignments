int a=1,sum=0;

int func1(int n,int a){
    if(a<n){
        printf("%d ",a);
        sum=sum+a;
        a++;
        func1(n,a);
    }
}
int main()
{
    int b;
    printf("Enter till how many number you want ");
    scanf("%d",&b);
    func1(b,a);
    printf("\nThe sum is %d",sum);
    return 0;
}

