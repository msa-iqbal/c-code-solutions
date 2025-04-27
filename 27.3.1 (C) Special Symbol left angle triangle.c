/// Special Symbol left angle triangle
/*
        * * * *
           * * *
              * *
                 *
*/
/*
           col1 col2 col3 col4
row4    *      *      *      *
row3            *      *      *
row2                    *      *
row1                            *
*/

#include <stdio.h>

int main()
{
    int n, row, col;

    printf(" Enter the value of n: ");
    scanf("%d", &n);

    for(row=n; row>=1; row--){

        for(col=1; col<=n-row; col++){
            printf("  ");
        }
        for(col=1; col<=row; col++){
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
  * * * * *
    * * * *
       * * *
          * *
            *
*/





