/// Create a X star pattern from given a flow/syntax/style (X Shape)
/*
        *          *
           *     *
              *
            *    *
        *            *
*/
/*
            col1 col2 col3 col4 col5
row1     *                                *
row2              *              *
row3                      *
row4              *              *
row5      *                              *
*/

#include <stdio.h>

int main()
{
    int n, row, col;

    printf(" Enter the value of n: ");
    scanf("%d", &n);
    printf("\n");

    for(row=1; row<=n; row++){
            for(col=1; col<=n; col++){
                   if(row==col || row+col==n+1){
                            printf(" *");
                   }
                   else{
                            printf("  ");
                   }
            }
            printf("\n");
    }

    return 0;
}

/* ===== Output / Result:
Input:
Enter the value of n: 5

Output:
     *       *
       *   *
         *
       *   *
     *       *
*/



