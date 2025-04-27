/// Calculate reverse of digits from given number

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
            sum=sum*10+rem;
            temp=temp/10;
        }
        printf(" Reverse of digits: %d \n", sum);

        return 0;
}

/* ===== Output / Result:
Input:
Enter any number: 1234

Output:
Reverse of digits: 4321
*/



