/// Create a pattern from given a flow/syntax/style
/*
         1 2 3 4 5 6 7 8 9
            1 2 3 4 5 6 7
               1 2 3 4 5
                  1 2 3
                     1
*/
/*
            col1 col2 col3 col4 col5 col6 col7 col8 col9
row5    1      2       3      4      5      6       7       8       9
row4            1       2      3      4      5       6       7
row3                     1      2      3      4       5
row2                             1      2      3
row1                                     1
*/

#include <stdio.h>

int main()
{
    int n, row, col;

    printf(" Enter the value of n: ");
    scanf("%d", &n);
    printf("\n");

    for(row=n; row>=1; row--){
            // for space print
            for(col=1; col<=n-row; col++){
                    printf("  ");
            }
           // for number print
            for(col=1; col<=2*row-1; col++){
                    printf(" %d", col);
            }
            printf("\n");
    }

    return 0;
}

/* ===== Output / Result:
Input:
Enter the value of n: 5

Output:
 1 2 3 4 5 6 7 8 9
    1 2 3 4 5 6 7
       1 2 3 4 5
          1 2 3
             1
*/







