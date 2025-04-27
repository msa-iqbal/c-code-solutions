/// Create a Floyd's triangle (right angle triangle) pattern from given a flow/syntax/style
/*
        1
        2 3
        4 5 6
        7 8 9 10
*/
/*
            col1 col2 col3 col4
row1      1
row2      2     3
row3      4     5       6
row4      7     8       9      10
*/

#include <stdio.h>

int main()
{
    int n, row, col, count=0;

    printf(" Enter the value of n: ");
    scanf("%d", &n);
    printf("\n");

    for(row=1; row<=n; row++){
            for(col=1; col<=row; col++){
                   ++count;
                   printf(" %d ", count);
            }
            printf("\n");
    }

    return 0;
}

/* ===== Output / Result:
Input:
Enter the value of n: 4

Output:
         1
         2  3
         4  5  6
         7  8  9  10
*/





