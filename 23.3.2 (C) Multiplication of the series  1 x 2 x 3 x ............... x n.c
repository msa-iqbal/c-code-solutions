/// Multiplication of the series  1 x 2 x 3 x ............... x n
/*
Let, Series:  1 x 2 x 3 x ............... x n
now, Calculate:
                i. find end (n) number
                ii. different between each number
Example:
                1 x 2 x 3 x ............... x 5
            = 1 x 2 x 3 x 4 x 5
            = 15
*/

#include <stdio.h>

int main()
{
    int n, i, mul=1;

    printf(" Enter the last number of the series (n): ");
    scanf(" %d", &n);

    printf("\n");
    for(i=1; i<=n; i++)
    {
        printf(" %d x ", i);
        mul= mul*i;
    }
    printf(". . . . . . . x %d(n) [here, n=%d]\n", n, n);
    printf(" Multiplication of the series: %d \n", mul);

    return 0;
}

/* ===== Output / Result:
Input:
Enter the last number of the series (n): 5

Output:
1 x  2 x  3 x  4 x  5 x . . . . . . . x 5(n) [here, n=5]
Multiplication of the series: 120
*/



