/// Counting number of a digit in an integer

#include <stdio.h>

int main()
{
        int num, count=0;

        printf(" Enter any integer number: ");
        scanf("%d", &num);

        while(num != 0)
        {
            num=num/10;
            ++count;
        }
        printf(" Total number of digits: %d", count);

        return 0;
}

/* ===== Output / Result:
Input:
Enter any integer number: 52369

Output:
Total number of digits: 5
*/

