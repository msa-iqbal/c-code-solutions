/// Matrix Multiplication by using 2D array
/*
Explain:
        Matrix (M) 1:                          Matrix (M) 2:
        -----------------------------        -----------------------------
                      col[0] | col[1]                         col[0] | col[1] | col[2]
                    -----------------                       -------------------------
        Row[0]   |   1     |   2   |           Row[0]   |   1     |   2     |    3
                    -----------------                       -------------------------
        Row[1]   |   3     |   4   |           Row[1]   |   4     |   5     |    6
                    -----------------                       -------------------------
        Row[2]   |   5     |   6   |

        Matrix (M) 3 = (Matrix 1) x (Matrix 1) :
        ==============================
                         col [0]     |     col [1]    | col [2]
                      ------------------------------------------
        Row [0]   | 1+8=9     | 2+10=12    | 3+12=15 |         // (1*1)+(2*4)=8
                      ------------------------------------------
        Row [1]   | 3+16=19  | 6+20=26   | 9+24=33
                      ------------------------------------------
        Row [2]   | 5+24=29  | 10+30=40  | 15+36=51

        Note:
                Rules: 1st Matrix's Column number == 2nd Matrix's Row number
                Rules 2: (Matrix1=Col) x (Matrix2=Row)

                Calculation:
                Row 0:
                Matrix 3 [row0][col0] :  [(M1=row0col0) x (M2=row0col0)] + [(M1=row0col1) x (M2=row1col0)]
                Matrix 3 [row0][col1] :  [(M1=row0col0) x (M2=row0col1)] + [(M1=row0col1) x (M2=row1col1)]
                Matrix 3 [row0][col2] :  [(M1=row0col0) x (M2=row0col2)] + [(M1=row0col1) x (M2=row1col2)]

                Row 1:
                Matrix 3 [row1][col0] :  [(M1=row1col0) x (M2=row0col0)] + [(M1=row1col1) x (M2=row1col0)]
                Matrix 3 [row1][col1] :  [(M1=row1col0) x (M2=row0col1)] + [(M1=row1col1) x (M2=row1col1)]
                Matrix 3 [row1][col2] :  [(M1=row1col0) x (M2=row0col2)] + [(M1=row1col1) x (M2=row1col2)]

                Row 2:
                Matrix 3 [row2][col0] :  [(M1=row2col0) x (M2=row0col0)] + [(M1=row2col1) x (M2=row1col0)]
                Matrix 3 [row2][col1] :  [(M1=row2col0) x (M2=row0col1)] + [(M1=row2col1) x (M2=row1col1)]
                Matrix 3 [row2][col2] :  [(M1=row2col0) x (M2=row0col2)] + [(M1=row2col1) x (M2=row1col2)]
*/

#include <stdio.h>

int main()
{
        int m1[50][50], m2[50][50], m3[50][50];
        int numberOfrows1, numberOfcols1, numberOfrows2, numberOfcols2;
        int row, col, r=0, s=0, iterator, sum=0;

        // Input the total numbers of row and columns
        printf(" Enter the total numbers of row & column for First matrix: \n");
        printf(" Enter the total row of the matrix: ");
        scanf("%d", &numberOfrows1);
        printf(" Enter the total col of the matrix: ");
        scanf("%d", &numberOfcols1);

        printf("\n Enter the total numbers of row & column for Second matrix: \n");
        printf(" Enter the total row of the matrix: ");
        scanf("%d", &numberOfrows2);
        printf(" Enter the total col of the matrix: ");
        scanf("%d", &numberOfcols2);

        while(numberOfcols1 != numberOfrows2){
                printf("\n\t Error!! Column of the first matrix not equal to Row of the second matrix \n\n");

                printf(" Enter the total numbers of row & column for First matrix: \n");
                printf(" Enter the total row of the matrix: ");
                scanf("%d", &numberOfrows1);
                printf(" Enter the total col of the matrix: ");
                scanf("%d", &numberOfcols1);

                printf("\n Enter the total numbers of row & column for Second matrix: \n");
                printf(" Enter the total row of the matrix: ");
                scanf("%d", &numberOfrows2);
                printf(" Enter the total col of the matrix: ");
                scanf("%d", &numberOfcols2);
        }

        /* ------------------- Insert the values of M1 & M2 Matrix ------------------- */
        printf("\n ------------------- Insert the values M1 & M2 Matrix ------------------- \n");
        printf("\n ------------------- Insert the values of [M1] Matrix: ");
        printf("\n Enter the values of row 0: \n");
        for(row=0; row<numberOfrows1; row++){                    // Insert the values of M1 Matrix
                for(col=0; col<numberOfcols1; col++){
                        printf(" m1[%d][%d]: ", row, col);
                        scanf("%d", &m1[row][col]);
                }
                r++;
                if(r==numberOfrows1){
                        printf("\n");
                }
                else{
                        printf("\n Enter the values of row %d: ",r);
                }
                printf("\n");
        }

        printf("\n ------------------- Insert the values of [M2] Matrix: ");
        printf("\n Enter the values of row 0: \n");                      // Insert the values of M2 Matrix
        for(row=0; row<numberOfrows2; row++){
                for(col=0; col<numberOfcols2; col++){
                        printf(" m2[%d][%d]: ", row, col);
                        scanf("%d", &m2[row][col]);
                }
                s++;
                if(s==numberOfrows2){
                        printf("\n");
                }
                else{
                        printf("\n Enter the values of row %d: ",s);
                }
                printf("\n");
        }


        /*------------------- Print the values of M1 & M2 Matrix ------------------- */
        printf("\n ------------------- Print the Values of [M1] & [M2] Matrix ------------------- \n");
        printf(" The M1 Matrix is: \n");
        for(int row=0; row<numberOfrows1; row++){          // Print M1 Matrix
               printf("\t\t\t");
                for(int col=0; col<numberOfcols1; col++){
                        printf("%d  ", m1[row][col]);
                }
                printf("\n");
        }

        printf("\n The M2 Matrix is: \n");
        for(int row=0; row<numberOfrows2; row++){      // Print M2 Matrix
                printf("\t\t\t");
                for(int col=0; col<numberOfcols2; col++){
                        printf("%d  ", m2[row][col]);
                }
                printf("\n");
        }

        /*------------------- Multiplication of M1 & M2 Matrix ------------------- */
        for(row=0; row<numberOfrows1; row++){                              /// Multiplication: M1 and M2 matrix
                for(col=0; col<numberOfcols2; col++){
                        for(iterator=0; iterator<numberOfcols1; iterator++){
                                sum = sum + m1[row][iterator] * m2[iterator][col];
                        }
                        m3[row][col] = sum;
                        sum=0;
                }
        }

         /*------------------- Print the M3 Matrix ------------------- */
        printf("\n ------------------- Print the Values of [M3] Matrix ------------------- \n");
        printf(" The Multiplication of [M1] x [M2] is: \n");
        for(int row=0; row<numberOfrows1; row++){                           /// Print M1 x M2 Matrix
                printf("\t\t\t");
                for(int col=0; col<numberOfcols2; col++){
                        printf("%d  ", m3[row][col]);
                }
                printf("\n");
        }

        return 0;
}

/* ===== Output / Result:
 Input:
 ------------------------------------------------------------------
 Enter the total numbers of row & column for First matrix:
 Enter the total row of the matrix: 6
 Enter the total col of the matrix: 9
 Enter the total numbers of row & column for Second matrix:
 Enter the total row of the matrix: 3
 Enter the total col of the matrix: 5
         Error!! Column of the first matrix isn't equal to Row of the second matrix

 Enter the total numbers of row & column for First matrix:
 Enter the total row of the matrix: 3
 Enter the total col of the matrix: 2
 Enter the total numbers of row & column for Second matrix:
 Enter the total row of the matrix: 2
 Enter the total col of the matrix: 3

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

 Insert the values of [M2] Matrix:
 Enter the values of row 0:
 m2[0][0]: 1
 m2[0][1]: 2
 m2[0][2]: 3
 Enter the values of row 1:
 m2[1][0]: 4
 m2[1][1]: 5
 m2[1][2]: 6

 Output:
 -----------------------------------------
 The M1 Matrix is:
                        1  2
                        3  4
                        5  6
 The M2 Matrix is:
                        1  2  3
                        4  5  6
 The Multiplication of [M1] x [M2] is:
                         9  12  15
                        19  26  33
                        29  40  51

 Program Calculation:
     sum=0;
     (m1[0][0] * m2[0][0]) + (m1[0][1] * m2[1][0]) Or sum = sum + m1[row][iterator] * m2[iterator][col];
     m3[row][col] = sum;
     sum=0;
*/







