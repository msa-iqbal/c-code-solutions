/// Convert from lowercase to uppercase (Using ASCII Formula)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lower;

    printf("Enter any lowercase letter: ");
    scanf("%c", &lower);

    printf("The uppercase letter is: %c \n", lower-32); // Different between upper & lower 32
    return 0;
}

/* ===== Output / Result:
Input:
Enter any lowercase letter: a

Output:
The uppercase letter is: A
*/

