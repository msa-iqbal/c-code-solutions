/// Create a pattern from given a flow/syntax/style (Pyramid)
/*
                        *
                     * * *
                   * * * * *
                 * * * * * * *
*/
/*
            col1 col2 col3 col4 col5 col6 col7
row1                               *
row2                      *       *      *
row3              *      *        *      *       *
row4     *       *      *        *      *        *       *
*/

#include <stdio.h>

int main()
{
    int n, row, col;

    printf(" Enter the value of n: ");
    scanf("%d", &n);
    printf("\n");

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

    return 0;
}

/* ===== Output / Result:
Input:
Enter the value of n: 4

Output:
       *
     * * *
   * * * * *
 * * * * * * *
*/




