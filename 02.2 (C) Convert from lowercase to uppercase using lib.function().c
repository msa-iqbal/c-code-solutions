/// Convert from lowercase to uppercase using library function()
#include <stdio.h>

int main()
{
    char lower, upper;

    printf("Enter any lowercase letter: ");
    scanf("%c", &lower);

    upper = toupper(lower);

    printf("The uppercase letter is: %c \n", upper);
    return 0;
}

/* ===== Output / Result:
Input:
Enter any uppercase letter: a

Output:
The lowercase letter is: A
*/
