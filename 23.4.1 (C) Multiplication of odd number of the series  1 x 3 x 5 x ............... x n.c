/// Multiplication of odd number of the series  1 x 3 x 5 x ............... x n
/*
Let, Series:  1 x 3 x 5 x ............... x n
now, Calculate:
                i. find end (n) number
                ii. different between each number
Example:
               1 x 3 x 5 x ............... x 9
            = 1 x 3 x 5 x 7 x 9
            = 945
*/

#include <stdio.h>

int main()
{
    int n, i, mul=1;

    printf(" Enter the last number of the series (n): ");
    scanf(" %d", &n);

    printf("\n");
    for(i=1; i<=n; i=i+2)
    {
        printf(" %d x", i);
        mul=mul*i;
    }
    printf(". . . . . . . x %d(n) [here, n=%d]\n",n,n);
    printf(" Multiplication of the series: %d \n", mul);

    return 0;
}

/* ===== Output / Result:
Input:
Enter the last number of the series (n): 9

Output:
1 x 3 x 5 x . . . . . . . x 9(n) [here, n=9]
Multiplication of the series: 945
*/









