/// Check the number is armstrong or not...from giver number

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
            sum=sum+rem*rem*rem;
            temp=temp/10;
        }

        if(n==sum)
            printf("\n The given number is \"ArmStrong Number\" \n");
        else
            printf("\n The given number isn't \"ArmStrong Number\" \n");

        return 0;
}

/* ===== Output / Result:
Input:
Enter any number: 153

Output:
The given number is "ArmStrong Number"
*/







