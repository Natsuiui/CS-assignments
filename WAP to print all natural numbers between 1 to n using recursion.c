int a=1;

int func1(int n,int a){
    if(a<n){
        printf("%d ",a);
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
    return 0;
}
