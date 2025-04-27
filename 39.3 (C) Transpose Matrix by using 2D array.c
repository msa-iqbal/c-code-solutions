/// Transpose Matrix by using 2D array
/*
Explain:
        Matrix (M) 1:                                   Matrix (M) 2: (Transposed Matrix)
        -----------------------------                 -----------------------------
                      col[0] | col[1]                                   col[0] | col[1] | col[2]
                    -----------------                                -------------------------
        Row[0]   |   1     |   2   |                    Row[0]   |   1     |   2     |    3
                    -----------------                                -------------------------
        Row[1]   |   3     |   4   |                    Row[1]   |   4     |   5     |    6
                    -----------------                               -------------------------
        Row[2]   |   5     |   6   |

        Note:
                 Convert to-
                 Matrix1 (row)  = TransposedMatrix (column)
                 Or
                 Matrix1 (column)  = TransposedMatrix (row)

*/

#include <stdio.h>

int main()
{
        int m1[50][50], transpose[50][50];
        int numberOfrows, numberOfcols;
        int row, col, r=0;

        // Input the total numbers of row and columns
        printf(" Enter the total numbers of row & column for First matrix: \n");
        printf(" Enter the total row of the matrix: ");
        scanf("%d", &numberOfrows);
        printf(" Enter the total col of the matrix: ");
        scanf("%d", &numberOfcols);

        /* ------------------- Insert the values of M1 Matrix ------------------- */
        printf("\n ------------------- Insert the values of [M1] Matrix: ");
        printf("\n Enter the values of row 0: \n");
        for(row=0; row<numberOfrows; row++){                    // Insert the values of M1 Matrix
                for(col=0; col<numberOfcols; col++){
                        printf(" m1[%d][%d]: ", row, col);
                        scanf("%d", &m1[row][col]);
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

        /*------------------- Print the values of M1 Matrix ------------------- */
        printf("\n ------------------- Print the Values of [M1] Matrix ------------------- \n");
        printf(" The M1 Matrix is: \n");
        for(int row=0; row<numberOfrows; row++){          // Print M1 Matrix
               printf("\t\t\t");
                for(int col=0; col<numberOfcols; col++){
                        printf("%d  ", m1[row][col]);
                }
                printf("\n");
        }

        /*------------------- Transpose Matrix Calculation ------------------- */
        for(row=0; row<numberOfrows; row++){                              /// Convert: 'M1' to 'Transpose matrix'
                for(col=0; col<numberOfcols; col++){
                        transpose[col][row] = m1[row][col];
                }
        }

         /*------------------- Print the Transpose Matrix ------------------- */
        printf("\n ------------------- Print the Values of [Transpose] Matrix ------------------- \n");
        printf(" The Transpose Matrix is: \n");
        for(int row=0; row<numberOfcols; row++){                           /// Print Transpose Matrix
                printf("\t\t\t");
                for(int col=0; col<numberOfrows; col++){
                        printf("%d  ", transpose[row][col]);
                }
                printf("\n");
        }

        return 0;
}

/* ===== Output / Result:
 Input:
 ------------------------------------------------------------------
 Enter the total numbers of row & column for First matrix:
 Enter the total row of the matrix: 3
 Enter the total col of the matrix: 2

 Insert the values of [M1] Matrix:
 Enter the values of row 0:
 m1[0][0]: 1
 m1[0][1]: 2
 Enter the values of row 1:
 m1[1][0]: 3
 m1[1][1]: 4
 Enter the values of row 2:
 m1[2][0]: 5
 m1[2][1]: 6


 Output:
 --------------------------------------
 The M1 Matrix is:
                        1  2
                        3  4
                        5  6
 The Transpose Matrix is:
                        1  3  5
                        2  4  6
*/








