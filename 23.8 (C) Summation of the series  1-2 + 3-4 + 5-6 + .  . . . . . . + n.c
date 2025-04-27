/// Summation of the series  1-2 + 3-4 + 5-6 + .  . . . . . . + n
/*
Let, Series:  1-2 + 3-4 + 5-6 + .  . . . . . . + n
now, Calculate:
                i. find end (n) number
                ii. different between each number
Example:
               1-2 + 3-4 + 5-6 + .  . . . . . . + 8
            =1-2 + 3-4 + 5-6 +7-8
            =(1+3+5+7) - (2+4+6+8)
            = -4
*/

#include <stdio.h>

int main()
{
        int n, i, even=0, odd=0, result=0;

        printf(" Enter the last number of the series (n): ");
        scanf(" %d", &n);

        printf("\n");
        for(i=1; i<=n; i++)
        {
                if(i%2==0){
                    even = even + i;
                }
                else{
                    odd=odd+i;
                }

                if(i%2 != 0)
                        printf(" (%d-%d) +", i, i+1);
        }

        result=odd-even;

        printf(". . . . . . . + %d(n) [here, n=%d]\n",n,n);
        printf(" Summation of the series: %d \n", result);

        return 0;
}

/* ===== Output / Result:
Input:
Enter the last number of the series (n): 8

Output:
(1-2) + (3-4) + (5-6) + (7-8) +. . . . . . . + 8(n) [here, n=8]
Summation of the series: -4
*/



















