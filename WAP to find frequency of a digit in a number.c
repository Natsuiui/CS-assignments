#include <stdio.h>

int main()
{   
    int n,i;
    printf("How many digits does your number have ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the number digitwise\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int freq[100000]={0};
    for(i=0;i<n;i++){
        freq[a[i]]++;
    }
    for(i=0;i<100000;i++){
        if(freq[i]){
        printf("The count of %d is %d\n",i,freq[i]);
    }
}return 0;
    
}