/// Multiplication of odd number of the series  1^2 x 3^2 x 5^2 x ............... x n^2
/*
Let, Series:  1^2 x 3^2 x 5^2 x ............... x n^2
now, Calculate:
                i. find end (n) number
                ii. different between each number
Example:
               1^2 x 3^2 x ............... x 7^2
            = 1^2 x 3^2 x 5^2 x 7^2
            = 11025
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
        printf(" %d^2 x", i);
        mul=mul*i*i;
    }
    printf(". . . . . . . x %d(n)^2 [here, n=%d]\n",n,n);
    printf(" Multiplication of the series: %d \n", mul);

    return 0;
}

/* ===== Output / Result:
Input:
Enter the last number of the series (n): 7

Output:
1^2 x 3^2 x 5^2 x 7^2 x. . . . . . . x 7(n)^2 [here, n=7]
Multiplication of the series: 11025
*/













