//9. WAP to access 2-D array using pointes.

#include <stdio.h>

int main(){
    int n, m, *ptr1;
    printf("Enter the values of n and m\n");
    scanf("%d%d", &n, &m);
    int arr[n][m];
    

    
    for(int i=0; i<n; i++){
        printf("Enter the elements of %dth row\n", i+1);
        for(int j=0; j<m; j++){
            scanf("%d", (*(arr+i)+j));
        }
    }
    
    printf("The 2D array is\n");
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", *(*(arr+i)+j));
        }
        printf("\n");
    }
    
    return 0;
}