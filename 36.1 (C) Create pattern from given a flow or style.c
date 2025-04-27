/// Create a pattern from given a flow/syntax/style
/*
             1 2 3 4 3 2 1
                1 2 3 2 1
                   1 2 1
                      1
*/
/*
            col1 col2 col3 col4 col5 col6 col7
row4    1     2     3       4      1     2     3
row3           1     2       3      2     1
row2                  1       2      1
row1                           1




Hints:
     Step: 1                                                                                         Step: 2
                            col1 col2 col3 col4                                                                     col1 col2 col3 col4
                row4       1     2     3      4                                                              row4   4      1     2     3
                row3              1     2      3                                                              row3   3      2     1
                row2                     1      2                                                              row2   2      1
                row1                             1                                                              row1   1

*/

#include <stdio.h>

int main()
{
    int n, row, col, count=0;

    printf(" Enter the value of n: ");
    scanf("%d", &n);
    printf("\n");

    for(row=n; row>=1; row--){
            /*--------------- Part: 1 ---------------*/
            for(col=1; col<=n-row; col++){
                    printf("  ");
            }
            for(col=1; col<=row; col++){
                   printf(" %d", col);
            }
            /*--------------- Part: 2 ---------------*/
            for(col=row-1; col>=1; col--){
                    printf(" %d", col);
            }
            printf("\n");
    }

    return 0;
}

/* ===== Output / Result:
Input:
Enter the value of n: 4

Output:
 1 2 3 4 3 2 1
    1 2 3 2 1
       1 2 1
          1
*/







