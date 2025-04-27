/// Summation of even number of the series  2 + 4 + 6 + ............... + n
/*
Let, Series:  2 + 4 + 6 + ............... + n
now, Calculate:
                i. find end (n) number
                ii. different between each number
Example:
               2 + 4 + 6 + ............... + 10
            = 2 + 4 + 6 + 8 + 10
            = 30
*/

#include <stdio.h>

int main()
{
        int n, i, sum=0;

        printf(" Enter the last number of the series (n): ");
        scanf(" %d", &n);

        printf("\n");
        for(i=2; i<=n; i=i+2)
        {
                printf(" %d +", i);
                sum=sum+i;
        }
        printf(". . . . . . . + %d(n) [here, n=%d]\n",n,n);
        printf(" Summation of the series: %d \n", sum);

        return 0;
}

/* ===== Output / Result:
Input:
Enter the last number of the series: 10

Output:
2 + 4 + 6 + 8 + 10 +. . . . . . . + 10(n) [here, n=10]
Summation of the series: 30
*/












