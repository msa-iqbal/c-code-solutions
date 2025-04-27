/// Calculate the area of triangle
#include <stdio.h>

int main()
{
    float base, height, area;
    printf("Enter the value of base: ");
    scanf("%f", &base);

    printf("Enter the value of height: ");
    scanf("%f", &height);

    area=0.5*base*height;
    printf("The area of triangle: %.2f \n", area);
    return 0;
}

/* ===== Output / Result:
Input:
Enter the value of base: 23
Enter the value of height: 31

Output:
The area of triangle: 356.50
*/








