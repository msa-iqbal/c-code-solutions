  /// Create a simple matrix by using 2D array
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
        int row, col, numberOfrows, numberOfcols, r=0;
        // Input the total numbers of rows& columns for create matrix
        printf(" Enter the total row(s) of the matrix: ");
        scanf("%d", &numberOfrows);
        printf(" Enter the total col(s) of the matrix: ");
        scanf("%d", &numberOfcols);
        // Insert Matrix Values
        printf("\n Enter the values of row 0: \n");
        for(row=0; row<numberOfrows; row++){
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
        // Print 2D Matrix
        printf(" The 2D Matrix is: \n");
        for(int row=0; row<numberOfrows; row++){
                printf("\t\t");
                for(int col=0; col<numberOfcols; col++){
                        printf("%d  ", a[row][col]);
                }
                printf("\n");
        }

        return 0;
}

/* ===== Output / Result:
 Input:
 Enter the total row of the matrix: 3
 Enter the total col of the matrix: 4

 Enter the values of row 0:
 a[0][0]: 10
 a[0][1]: 11
 a[0][2]: 12
 a[0][3]: 13

 Enter the values of row 1:
 a[1][0]: 20
 a[1][1]: 21
 a[1][2]: 22
 a[1][3]: 23

 Enter the values of row 2:
 a[2][0]: 30
 a[2][1]: 31
 a[2][2]: 32
 a[2][3]: 33

 Output:
 The 2D Matrix is:
                10  11  12  13
                20  21  22  23
                30  31  32  33
*/





