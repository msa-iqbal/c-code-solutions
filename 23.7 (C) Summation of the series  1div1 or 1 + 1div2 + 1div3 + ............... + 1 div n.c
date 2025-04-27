/// Summation of the series  1/1 or 1 + 1/2 + 1/3 + ............... + 1/n
/*
Let, Series:  1/1 or 1 + 1/2 + 1/3 + ............... + 1/n
now, Calculate:
                i. find end (n) number
                ii. different between each number
Example:
               1/1 + 1/2 + 1/3 + ............... + 1/5
            =1/1 + 1/2 + 1/3 + 1/4 + 1/5
            = 2.28
*/

#include <stdio.h>

int main()
{
        double n, i, sum=0;

        printf(" Enter the last number of the series 1/(n): ");
        scanf(" %lf", &n);

        printf("\n");
        for(i=1; i<=n; i++)
        {
                printf(" 1/%.0lf +", i);
                sum=sum + (1/i);
        }
        printf(". . . . . . . + 1/%.0lf(n) [here, n=%.0lf]\n",n,n);
        printf(" Summation of the series: %.2lf \n", sum);

        return 0;
}

/* ===== Output / Result:
Input:
Enter the last number of the series 1/(n): 5

Output:
1/1 + 1/2 + 1/3 + 1/4 + 1/5 +. . . . . . . + 1/5(n) [here, n=5]
Summation of the series: 2.28
*/

















