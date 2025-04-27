/// Create a pattern from given a flow/syntax/style
/*
                          *
                       * * *
                     * * * * *
                   * * * * * * *
                 * * * * * * * * *
                   * * * * * * *
                     * * * * *
                       * * *
                         *
                         *
*/
/*
            col1 col2 col3 col4 col5 col6 col7 col8 col9
row1                                     *
row2                             *      *      *
row3                     *       *      *      *     *
row4             *      *       *      *     *      *      *
row5       *      *      *       *     *      *      *      *     *
row4              *      *       *     *     *      *      *
row3                     *        *     *      *     *
row2                               *     *      *
row1                                     *
*/

#include <stdio.h>

int main()
{
    int n, row, col;

    printf(" Enter the value of n: ");
    scanf("%d", &n);
    printf("\n");
    /*------------- Part 1 --------------------*/
    for(row=1; row<=n; row++){
            // for space print
            for(col=1; col<=n-row; col++){
                    printf("  ");
            }
           // for * print
            for(col=1; col<=2*row-1; col++){
                    printf(" *");
            }
            printf("\n");
    }
    /*------------- Part 2 --------------------*/
    for(row=n-1; row>=1; row--){
            // for space print
            for(col=1; col<=n-row; col++){
                    printf("  ");
            }
           // for * print
            for(col=1; col<=2*row-1; col++){
                    printf(" *");
            }
            printf("\n");
    }

    return 0;
}

/* ===== Output / Result:
Input:
Enter the value of n: 5

Output:
         *
       * * *
     * * * * *
   * * * * * * *
 * * * * * * * * *
   * * * * * * *
     * * * * *
       * * *
         *
         *
*/







