/// Calculation by calculator by using switch statement

#include <stdio.h>

int main()
{
         char choose;
         float x, y, result, n=6;
         printf("----Calculation by calculator---- \n");
         printf("Press '+': Addition for 2 numbers \n");
         printf("Press '-': Subtraction for 2 numbers \n");
         printf("Press '*': Multiplication for 2 numbers \n");
         printf("Press '/': Division for 2 numbers \n");
         printf("Enter your choose: ");
         scanf("%c", &choose);

         switch(choose){
                case '+':
                             printf("\nEnter number x & y are: ");
                             scanf("%f %f", &x, &y);
                             result=x+y;
                             printf("The [+] result is: %.2f \n", result);
                             break;
                case '-':
                             printf("\nEnter number x & y are: ");
                             scanf("%f %f", &x, &y);
                             result=x-y;
                             printf("The [-] result is: %.2f \n", result);
                             break;
                case '*':
                             printf("\nEnter number x & y are: ");
                             scanf("%f %f", &x, &y);
                             result=x*y;
                             printf("The [*] result is: %.2f \n", result);
                             break;
                case '/':
                             printf("\nEnter number x & y are: ");
                             scanf("%f %f", &x, &y);
                             result=x/y;
                             printf("The [/] result is: %.2f \n", result);
                             break;

                default:
                             printf("\n Choose your calculation option! \n\n");
                             break;
         }

         return 0;
}

/* ===== Output / Result:
Input:
----Calculation by calculator----
Press '+': Addition for 2 numbers
Press '-': Subtraction for 2 numbers
Press '*': Multiplication for 2 numbers
Press '/': Division for 2 numbers
Enter your choose: *
Enter number x & y are: 5 6

Output:
The [*] result is: 30.00
*/



