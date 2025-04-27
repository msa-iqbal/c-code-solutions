/// Create a pattern from given a flow/syntax/style
/*
                 1
                 2 4
                 3 6 9
                 4 8 16 20
*/
/*
            col1 col2 col3 col4
row1    1
row2    2      4
row3    3      6      9
row4    4      8      16       20
*/

#include <stdio.h>

int main()
{
    int n, row, col;

    printf(" Enter the value of n: ");
    scanf("%d", &n);
    printf("\n");

    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
            int result;
            result=row*col;
            printf(" %d ",result);
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
 2  4
 3  6  9
 4  8  12  16
*/





