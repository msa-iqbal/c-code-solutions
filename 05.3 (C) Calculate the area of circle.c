/// Calculate the area of circle
#include <stdio.h>

int main()
{
     float radius, area;
     printf("Enter the values of radius: ");
     scanf("%f", &radius);

    area = 3.1416 * radius * radius;
    printf("The area of circle is: %.2f \n", area);
    return 0;
}

/* ===== Output / Result:
Input:
Enter the values of radius: 5

Output:
The area of circle is: 78.54
*/

