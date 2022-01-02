//11. WAP to multipy 2 matrix using pointers.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int rowsa, rowsb, cola, colb;
    printf("Enter the number of rows and columns in the first Matrix(Sep by comma)\n");
    scanf("%d,%d", &rowsa, &cola);
    printf("Enter the number of rows and columsn in the second Matrix(Sep by comma)\n");
    scanf("%d,%d", &rowsb, &colb);

    if(cola != rowsb){
        printf("No Multiplication possible");
        exit(0);
    }

    int mat1[rowsa][cola], mat2[rowsb][colb];
    int resultant[rowsa][colb];

    for(int i=0; i<rowsa; i++){
        for(int j=0; j<colb; j++){
            *(*(resultant+i)+j) = 0;
        }
    }

    printf("Enter the values of the first matrix\n");
    for(int i=0; i<rowsa; i++){
        for(int j=0; j<cola; j++){
            scanf("%d", (*(mat1+i)+j));
        }
    }

    printf("Enter the values of the 2nd Matrix\n");
    for(int i=0; i<rowsb; i++){
        for(int j=0; j<colb; j++){
            scanf("%d", (*(mat2+i)+j));
        }
    }

    for(int i=0; i<rowsa; i++){
        for(int j=0; j<colb; j++){
            for(int k=0; k<cola; k++){
                *(*(resultant+i)+j) += (*(*(mat1+i)+k)) * (*(*(mat2+k)+j));
            }
        }
    }

    printf("The Resultant Matrix is \n");

    for(int i=0; i<rowsa; i++){
        for(int j=0; j<colb; j++){
            printf("%d ", *(*(resultant+i)+j));
        }
        printf("\n");
    }
}
