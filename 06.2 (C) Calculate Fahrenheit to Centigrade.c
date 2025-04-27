/// Calculate Centigrade to Fahrenheit
#include <stdio.h>

int main()
{
     float fahrenheit, centigrade;
     printf("Enter the values of fahrenheit: ");
     scanf("%f", &fahrenheit);

    centigrade = (fahrenheit - 32) / 1.8;   // Centigrade to Fahrenheit
    printf("Centigrade value is: %.2f \n", centigrade);
    return 0;
}

/* ===== Output / Result:
Input:
Enter the values of fahrenheit: 54

Output:
Centigrade value is: 12.22
*/





