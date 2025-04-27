/// Calculate sum of digits from given number

#include<stdio.h>

int main()
{
        int n, temp, rem, sum=0;

        printf(" Enter any number: ");
        scanf("%d", &n);

        temp=n;

        while(temp !=0)
        {
            rem=temp%10;
            sum=sum+rem;    // Or, sum += rem;
            temp=temp/10;
        }
        printf(" Sum of digits: %d \n", sum);

        return 0;
}


/* ===== Output / Result:
Input:
Enter any number: 1234

Output:
Sum of digits: 10
*/


