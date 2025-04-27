/// Convert from uppercase to lowercase using library function
#include <stdio.h>

int main()
{
    char upper, lower;

    printf("Enter any uppercase letter: ");
    scanf("%c", &upper);

    lower = tolower(upper);

    printf("The lowercase letter is: %c \n",lower);
    return 0;
}

/* ===== Output / Result:
Input:
Enter any uppercase letter: A

Output:
The lowercase letter is: a
*/
