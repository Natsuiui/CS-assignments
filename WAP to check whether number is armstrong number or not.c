#include<stdio.h>
int ar[100];
int main()

{  int num , tempnum;
   printf("Enter number: \n");
   scanf("%d" , &num);
   tempnum = num;
    int strcheck = 0;
   int size = 0;
    while(tempnum!=0){
        size+=1;
        tempnum/=10;
    }
    tempnum = num;
    for(int i=0; i<size; i++){
        ar[i] = tempnum % 10;
        tempnum /= 10;
        if(tempnum==0){
            break;
        }
    }
    for(int i = 0 ; i<size; i++)
    {
        int fac = 1;
        for(int j=1; j<=ar[i]; j++){
        fac *= j;

    }
    strcheck += fac;
    }

    if(strcheck == num)
    {
        printf("%d is a strong number." , num);
    }
    else
    {
        printf("%d is a  not a strong number." , num);
    }
}