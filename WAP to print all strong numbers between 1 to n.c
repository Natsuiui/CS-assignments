#include <stdio.h>

int ar[100];
int ifstrong(int);
int fac(int);
void numtoarr(int);
int len(int);

int main()
{
    int strnum, endnum;
    printf("Enter the starting number\n");
    scanf("%d", &strnum);
    printf("Enter the ending number\n");
    scanf("%d", &endnum);

    printf("The strong numbers between %d and %d is ", strnum, endnum);

    for(int i=strnum; i<endnum; i++){
        if(ifstrong(i)){
            printf("%d ", i);
        }
    }

}

int ifstrong(int num){
    int strcheck=0;
    numtoarr(num);
    for(int i=0; i<len(num); i++){
        strcheck += fac(ar[i]);
    }
    if(strcheck == num){
        return 1;
    }else{
        return 0;
    }

}

int fac(int num){
    int fac = 1;
    for(int i=1; i<=num; i++){
        fac *= i;
    }
    return fac;
}

void numtoarr(int num){
    int tempnum;
    tempnum = num;
    for(int i=0; i<len(num); i++){
        ar[i] = tempnum % 10;
        tempnum /= 10;
        if(tempnum==0){
            break;
        }
    }
}

int len(int num){
    int size = 0;
    while(num!=0){
        size+=1;
        num/=10;
    }
    return size;
}