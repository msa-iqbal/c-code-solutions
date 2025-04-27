/// Binary right angle triangle
/*
        1
        0  0
        1  1  1
        0  0  0  0

*/
/*
           col1 col2 col3 col4
row1  1
row2  0       0
row3  1       1      1
row4  0       0      0      0
*/

#include <stdio.h>

int main()
{
    int n, row, col;

    printf(" Enter the value of n: ");
    scanf("%d", &n);

    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
            int bin;
            bin=row%2;
            printf(" %d ", bin);
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
 0  0
 1  1  1
 0  0  0  0
 1  1  1  1  1
*/

