  /// Matrix addition and subtraction by using 2D array
/*
Explain:
                         col [0] | col [1] | col [2] | col [3]
                        _________________________________________
        Row [0]   |   10    |   11      |   12      |   13    |                      -> Index Number
                        _________________________________________
        Row [1]   |   20    |   21      |   22      |   23    |                      -> Index Number
                        _________________________________________
        Row [2]   |   30    |   31      |   32      |   33    |                      -> Index Number
*/

#include <stdio.h>

int main()
{
        int a[50][50], b[50][50], c[50][50];
        int row, col, numberOfrows, numberOfcols, r=0, s=0;

        // Input the total numbers of row and columns
        printf(" Enter the total row of the matrix: ");
        scanf("%d", &numberOfrows);
        printf(" Enter the total col of the matrix: ");
        scanf("%d", &numberOfcols);

        /* ------------------- Insert the values of A & B Matrix ------------------- */
        printf("\n ------------------- Insert the values A & B Matrix ------------------- \n");
        printf("\n ------------------- Insert the values of [A] Matrix: ");
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

        printf("\n ------------------- Insert the values of [B] Matrix: ");
        printf("\n Enter the values of row 0: \n");                      // Insert the values of B Matrix
        for(row=0; row<numberOfrows; row++){
                for(col=0; col<numberOfcols; col++){
                        printf(" b[%d][%d]: ", row, col);
                        scanf("%d", &b[row][col]);
                }
                s++;
                if(s==numberOfrows){
                        printf("\n");
                }
                else{
                        printf("\n Enter the values of row %d: ",s);
                }
                printf("\n");
        }


        /*------------------- Print the values of A & B Matrix ------------------- */
        printf("\n ------------------- Print the Values of [A] & [B] Matrix ------------------- \n");
        printf(" The A Matrix is: \n");
        for(int row=0; row<numberOfrows; row++){          // Print A Matrix
               printf("\t\t\t");
                for(int col=0; col<numberOfcols; col++){
                        printf("%d  ", a[row][col]);
                }
                printf("\n");
        }

        printf("\n The B Matrix is: \n");
        for(int row=0; row<numberOfrows; row++){      // Print B Matrix
                printf("\t\t\t");
                for(int col=0; col<numberOfcols; col++){
                        printf("%d  ", b[row][col]);
                }
                printf("\n");
        }

        /*------------------- Summation of A & B Matrix ------------------- */
        for(row=0; row<numberOfrows; row++){                        /// Summation: A and B matrix
                for(col=0; col<numberOfcols; col++){
                        c[row][col] =  a[row][col] + b[row][col];
                }
        }

        /*------------------- Subtraction of A & B Matrix ------------------- */
        for(row=0; row<numberOfrows; row++){                        /// Subtraction: A and B matrix
                for(col=0; col<numberOfcols; col++){
                       c[row+(numberOfrows+1)][col+(numberOfrows+1)] =  a[row][col] - b[row][col];
                }
        }

       /*------------------- Print the C Matrix ------------------- */
        printf("\n ------------------- Print the Values of [C] Matrix ------------------- \n");
        printf(" The Summation of [A]+[B] is: \n");
        for(int row=0; row<numberOfrows; row++){                           /// Print A+B Matrix
                printf("\t\t\t");
                for(int col=0; col<numberOfcols; col++){
                        printf("%d  ", c[row][col]);
                }
                printf("\n");
        }

        printf("\n The Subtraction of [A]-[B] is: \n");
        for(int row=0; row<numberOfrows; row++){                           /// Print A-B Matrix
                printf("\t\t\t");
                for(int col=0; col<numberOfcols; col++){
                        printf("%d  ", c[row+(numberOfrows+1)][col+(numberOfrows+1)]);
                }
                printf("\n");
        }

        return 0;
}

/* ===== Output / Result:
 Input:
 ----------------------------------------
 Enter the total row of the matrix: 2
 Enter the total col of the matrix: 3

 Insert the values of [A] Matrix:
 Enter the values of row 0:
 a[0][0]: 40
 a[0][1]: 41
 a[0][2]: 42
 Enter the values of row 1:
 a[1][0]: 30
 a[1][1]: 31
 a[1][2]: 32

 Insert the values of [B] Matrix:
 Enter the values of row 0:
 b[0][0]: 20
 b[0][1]: 21
 b[0][2]: 22
 Enter the values of row 1:
 b[1][0]: 10
 b[1][1]: 11
 b[1][2]: 12


 Output:
 ------------------------------
 The A Matrix is:
                        40  41  42
                        30  31  32
 The B Matrix is:
                        20  21  22
                        10  11  12

 The Sum. of [A]+[B] is:
                        60  62  64
                        40  42  44
 The Sub. of [A]-[B] is:
                        20  20  20
                        20  20  20
*/






