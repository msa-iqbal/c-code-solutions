/// Check the number is palindrome or not...from giver number
/*
  Condition:
            -Input number == Reverse number 
			 If, both result are same then the input number is Palindrome number.
			 else, the input number isn't Palindrome number.
   
*/
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

        if(n==sum)
            printf("\n The given number is \"Palindrome Number\" \n");
        else
            printf("\n The given number isn't \"Palindrome Number\" \n");

        return 0;
}

/* ===== Output / Result:
Input:
Enter any number: 121

Output:
Reverse of digits: 121
The given number is "Palindrome Number"
*/


