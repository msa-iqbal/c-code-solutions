/// Summation of the series  1^2 + 2^2 + 3^2 + ............... + n^2
/*
Let, Series:  1^2 + 2^2 + 3^2 + ............... + n^2
now, Calculate:
                i. find end (n) number
                ii. different between each number
Example:
               1^2 + 2^2 + 3^2 + ............... + n^2
            = 1^2 + 2^2 + 3^2 + 4^2 + 5^2
            = 55
*/

#include <stdio.h>

int main()
{
        int n, i, sum=0;

        printf(" Enter the last number of the series (n)^2: ");
        scanf(" %d", &n);

        printf("\n");
        for(i=1; i<=n; i++)
        {
                printf(" %d^2 +", i);
                sum=sum + i*i;
        }
        printf(". . . . . . . + %d(n)^2 [here, n=%d]\n",n,n);
        printf(" Summation of the series: %d \n", sum);

        return 0;
}

/* ===== Output / Result:
Input:
Enter the last number of the series (n)^2: 5

Output:
1^2 + 2^2 + 3^2 + 4^2 + 5^2 +. . . . . . . + 5(n)^2 [here, n=5]
Summation of the series: 55
*/















