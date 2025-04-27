/// Number left angle triangle
/*
                      1
                   2 2
                3 3 3
             4 4 4 4
                3 3 3
                   2 2
                      1
*/
/*
           col1 col2 col3
row1                   1
row2           2      2
row3  3       3      3
row2           2      2
row1                   1
*/

#include <stdio.h>

int main()
{
    int n, row, col;

    printf(" Enter the value of n: ");
    scanf("%d", &n);

    for(row=1; row<=n; row++){

        for(col=1; col<=n-row; col++){
            printf("  ");
        }
        for(col=1; col<=row; col++){
            printf(" %d", row);
        }
        printf("\n");
    }

    for(row=n-1; row>=1; row--){

        for(col=1; col<=n-row; col++){
            printf("  ");
        }
        for(col=1; col<=row; col++){
            printf(" %d", row);
        }
        printf("\n");
    }

    return 0;
}

/* ===== Output / Result:
Input:
Enter the value of n: 5

Output:
            1
          2 2
       3 3 3
    4 4 4 4
 5 5 5 5 5
    4 4 4 4
       3 3 3
          2 2
             1
*/






