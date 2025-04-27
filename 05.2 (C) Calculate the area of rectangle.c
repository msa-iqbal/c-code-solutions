/// Calculate the area of rectangle
#include <stdio.h>

int main()
{
     float length, width, area;
     printf("Enter the values of length: ");
     scanf("%f", &length);
     printf("Enter the values of width: ");
     scanf("%f", &width);

    area = length * width; // area of rectangle
    printf("The area of rectangle is: %.2f \n", area);
    return 0;
}

/* ===== Output / Result:
Input:
Enter the values of length: 25
Enter the values of width: 15

Output:
The area of rectangle is: 375.00
*/












