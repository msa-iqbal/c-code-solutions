/// Calculate Centigrade to Fahrenheit
#include <stdio.h>

int main()
{
     float centigrade, fahrenheit;
     printf("Enter the values of centigrade: ");
     scanf("%f", &centigrade);

    fahrenheit = (centigrade * 1.8) + 32;   // Centigrade to Fahrenheit
    printf("Fahrenheit value is: %.2f \n", fahrenheit);
    return 0;
}

/* ===== Output / Result:
Input:
Enter the values of centigrade: 12

Output:
Fahrenheit value is: 53.60
*/



