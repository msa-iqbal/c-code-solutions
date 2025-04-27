/// Special Symbol right angle triangle
/*
        *
        * *
        * * *
        * * * *
*/
/*
           col1 col2 col3 col4
row1  *
row2  *       *
row3  *       *       *
row4  *       *       *      *
*/

#include <stdio.h>

int main()
{
    int n, row, col;

    printf(" Enter the value of n: ");
    scanf("%d", &n);

    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
            printf(" * ");
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
 *  *
 *  *  *
 *  *  *  *
 *  *  *  *  *
*/




