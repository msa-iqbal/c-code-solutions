/// Convert from uppercase to lowercase (Using ASCII Formula)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char upper;

    printf("Enter any uppercase letter: ");
    scanf("%c", &upper);

    printf("The lowercase letter is: %c \n", upper+32); // Different between upper & lower 32
    return 0;
}

/* ===== Output / Result:
Input:
Enter any uppercase letter: A

Output:
The lowercase letter is: a
*/


