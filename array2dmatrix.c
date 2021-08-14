#include <stdio.h>

int main(){

    int row, colum;

    printf("Number of row: ");
    scanf("%d", &row);


    printf("Number of colum: ");
    scanf("%d", &colum);

    int array1[row][colum];
    int array2[row][colum];
    int array3[row][colum];
    int i, k;
    for ( i = 0; i < row; i++)
    {
        for ( k = 0; k < colum; k++)
        {
            printf("Give the first array value: ");
            scanf("%d", &array1[i][k]);   
        }   
    }
    for ( i = 0; i < row; i++)
    {
        for ( k = 0; k < colum; k++)
        {
            printf("Give the Second array value: ");
            scanf("%d", &array2[i][k]);
            
        }
        
    }
    for ( i = 0; i < row; i++)
    {
        for ( k = 0; k < colum; k++)
        {
           
            array3[i][k] = array1[i][k] + array2[i][k];
            printf("%d\t", array3[i][k]);
        }
        printf("\n");   
    }
    return 0;
}
