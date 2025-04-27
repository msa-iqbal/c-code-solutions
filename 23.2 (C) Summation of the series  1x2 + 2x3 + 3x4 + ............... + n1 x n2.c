/// Summation of the series  1x2 + 2x3 + 3x4 + ............... + n1 x n2
/*
Let, Series:  1x2 + 2x3 + 3x4 + ............... +n1 x n2
now, Calculate:
                i. find end (n) number
                ii. different between each number
Example:
               1x2 + 2x3 + 3x4 + . . . . + 5x6
            = 1x2 + 2x3 + 3x4 + 4x5 + 5x6
            = 2 + 6 + 12 + 20 + 30
            = 70 (Summation of this series)
*/

#include <stdio.h>

int main()
{
    int start1=1, start2=2, end1, end2, sum=0;

    printf(" Enter the last number of the series n1 and n2 are: ");
    scanf("%d %d", &end1, &end2);

    while(start1<=end1 && start2<=end2)
    {
        sum=sum + start1*start2;
        start1=start1+1;
        start2=start2+1;
    }

    printf("\n 1x2 + 2x3 + 3x4 + . . . . . . . . . . . . + %dx%d \n", end1, end2);
    printf(" Summation of the series: %d \n", sum);

    return 0;
}

/* ===== Output / Result:
Input:
Enter the last number of the series n1 and n2 are: 8 9

Output:
1x2 + 2x3 + 3x4 + . . . . . . . . . . . . + 8x9
Summation of the series: 240
*/








