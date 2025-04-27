/// Convert from octal to hexa-decimal
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the octal number: ");
    scanf("%o", &num);

    printf("Hexa-decimal number is: %x", num);
    return 0;
}

/* ===== Output / Result:
Input:
Enter the octal number: 16

Output:
Hexa-decimal number is: e
*/


