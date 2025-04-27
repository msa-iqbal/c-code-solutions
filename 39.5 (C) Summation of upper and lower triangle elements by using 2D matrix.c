/// Summation of upper and lower triangle elements by using 2D matrix
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
                        Upper triangle elements are: 2 3 6
                        Sum of Upper triangle elements = 2+3+6 = 11

                        Upper triangle elements are: 4 7 8
                        Sum of Upper triangle elements = 4+7+8 = 19

        Calculate:
               Applying condition where, row == col is equal
               - Upper Triangle: where, (row == col) is equal and summation of its upper/top elements
               - Lower Triangle: where, (row == col) is equal and summation of its lower/bottom elements

*/

#include <stdio.h>

int main()
{
        int a[50][50];
        int numberOfrows=0, numberOfcols=0;
        int row, col, r=0, upperSum=0, lowerSum=0;

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

        /*------------------- Calculate the sum of upper and lower triangle elements of a matrix ------------------- */
        for(row=0; row<numberOfrows; row++){                              /// Calculate the sum of upper and lower triangle elements
                for(col=0; col<numberOfcols; col++){
                        if(row<col){
                            //printf("\n UpperTriangle elements: %d ", a[row][col]);
                             upperSum = upperSum + a[row][col];
                        }
                        if(row>col){
                            // printf("\n LowerTriangle elements: %d ", a[row][col]);
                             lowerSum = lowerSum + a[row][col];
                        }
                }
        }
        printf("\n Sum of Upper triangle elements = %d \n", upperSum);
        printf("\n Sum of Lower triangle elements = %d \n", lowerSum);

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
 a[0][0]: 1
 a[0][1]: 2
 a[0][2]: 3

 Enter the values of row 1:
 a[1][0]: 4
 a[1][1]: 5
 a[1][2]: 6

 Enter the values of row 2:
 a[2][0]: 7
 a[2][1]: 8
 a[2][2]: 9


 Output:
 --------------------------------------
 The A Matrix is:
                        1  2  3
                        4  5  6
                        7  8  9

 Sum of Upper triangle elements = 11
 Sum of Lower triangle elements = 19
*/










