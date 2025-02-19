//print the 2d-array 
#include <stdio.h>
int main(){
    //declaring and initializing a 2D array with 2 rows and 3 columns
    int matrix [2][3]={
        {1,2,3},//first row
        {4,5,6}//second row
    };
    //access the element in an array
    printf("the element at 1 row and columnis %d\n",matrix[0][2]);
    //update the value at 1 row and 3 column
    matrix[0][2]=30;
    printf(" After update the element at 1 row and columnis %d\n",matrix[0][2]);
    //printing the 2D array 
    printf("the matrix is:\n");
    for (int i = 0 ; i < 2 ; i++){//loop over rows
        for (int j = 0 ; j < 3 ; j++) //loop over columns
       printf("%d\t",matrix[i][j]); 
    }
    printf("%d\n");
    return 0  ;
}