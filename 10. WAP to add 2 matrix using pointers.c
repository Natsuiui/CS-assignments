//10. WAP to add 2 matrix using pointers.
#include <stdio.h>

int main()
{
    int mata[3][3], matb[3][3], matc[3][3];
    
    for (int i=0; i<3; i++){
        printf("Enter the Values of the %d row in The first matrix\n", i+1);
        for (int j=0; j<3; j++){
            scanf("%d", (*(mata+i)+j));
        }
    }
    
    for (int i=0; i<3; i++){
        printf("Enter the Values of the %d row in The second matrix\n", i+1);
        for (int j=0; j<3; j++){
            scanf("%d", (*(matb+i)+j));
        }
    }
    
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            *(*(matc+i)+j) = *(*(mata+i)+j) + *(*(matb+i)+j);
        }
    }
    
    printf("The Sum of the matrix is \n");
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            printf("%d ", *(*(matc+i)+j));
        }
        printf("\n");
    }
}
