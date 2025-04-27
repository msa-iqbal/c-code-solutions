/// Sum of the diagonal elements of a 2D array
/*
Explain:
        Matrix (A):
        -----------------------------
                      col[0]  | col[1] | col[2]
                    ------------------------
        Row[0]   |   1     |     2    |   3
                    ------------------------
        Row[1]   |   4     |     5    |   6
                    ------------------------
        Row[2]   |   7     |     8    |   9

        Example:
                        Diagonal elements are: 1 5 9
                        Sum of diagonal elements = 1+5+9 = 15
        Calculate:
               - Summation of value where, (row == col) is equal
*/

#include <stdio.h>

int main()
{
        int a[50][50];
        int numberOfrows=0, numberOfcols=0;
        int row, col, r=0, sum=0;

        // Input the total numbers of row and columns
        printf(" Enter the total numbers of row & column for create a matrix: \n");
        printf(" Enter the total row of the matrix: ");
        scanf("%d", &numberOfrows);
        printf(" Enter the total col of the matrix: ");
        scanf("%d", &numberOfcols);

        while(numberOfrows != numberOfcols){
                printf("\n\t Error!! Row & Column not equal of the matrix \n\n");

                printf(" Enter the total numbers of row & column for create a matrix: \n");
                printf(" Enter the total row of the matrix: ");
                scanf("%d", &numberOfrows);
                printf(" Enter the total col of the matrix: ");
                scanf("%d", &numberOfcols);
        }

        /* ------------------- Insert the values of A Matrix ------------------- */
        printf("\n ------------------- Insert the values of this Matrix: ");
        printf("\n Enter the values of row 0: \n");
        for(row=0; row<numberOfrows; row++){                    // Insert the values of A Matrix
                for(col=0; col<numberOfcols; col++){
                        printf(" a[%d][%d]: ", row, col);
                        scanf("%d", &a[row][col]);
                }
                r++;
                if(r==numberOfrows){
                        printf("\n");
                }
                else{
                        printf("\n Enter the values of row %d: ",r);
                }
                printf("\n");
        }

        /*------------------- Print the values of A Matrix ------------------- */
        printf("\n ------------------- Print the Values of this Matrix ------------------- \n");
        printf(" The A Matrix is: \n");
        for(int row=0; row<numberOfrows; row++){          // Print A Matrix
               printf("\t\t\t");
                for(int col=0; col<numberOfcols; col++){
                        printf("%d  ", a[row][col]);
                }
                printf("\n");
        }

        /*------------------- Calculate Diagonal Elements of a matrix ------------------- */
        printf("\n Diagonal elements are: ");
        for(row=0; row<numberOfrows; row++){                              /// Calculate Diagonal Elements of a matrix
                for(col=0; col<numberOfcols; col++){
                        if(row==col){
                             printf("%d ", a[row][col]);
                             sum=sum + a[row][col];
                        }
                }
        }
        printf("\n Sum of diagonal elements = %d \n", sum);

        return 0;
}

/* ===== Output / Result:
 Input:
 ------------------------------------------------------------------
 Enter the total numbers of row & column for create a matrix:
 Enter the total row of the matrix: 1
 Enter the total col of the matrix: 3
         Error!! Row & Column not equal of the matrix

 Enter the total numbers of row & column for create a matrix:
 Enter the total row of the matrix: 3
 Enter the total col of the matrix: 3

 Insert the values of this Matrix:
 Enter the values of row 0:
 a[0][0]: 11
 a[0][1]: 12
 a[0][2]: 13

 Enter the values of row 1:
 a[1][0]: 14
 a[1][1]: 15
 a[1][2]: 16

 Enter the values of row 2:
 a[2][0]: 17
 a[2][1]: 18
 a[2][2]: 19


 Output:
 --------------------------------------
 The A Matrix is:
                        11  12  13
                        14  15  16
                        17  18  19

 Diagonal elements are: 11 15 19
 Sum of diagonal elements = 45
*/









