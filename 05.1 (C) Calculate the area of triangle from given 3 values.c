/// Calculate the area of triangle from given 3 values
#include <stdio.h>

int main()
{
     double a, b, c, s, area;
     printf("Enter the values of a, b, c are: ");
     scanf("%lf %lf %lf", &a, &b, &c);

    s = (a+b+c)/2;
    area = sqrt(s * (s-a) * (s-b) * (s-c)); //area of triangle

    printf("The area of triangle is: %.2lf \n", area);
    return 0;
}

/* ===== Output / Result:
Input:
Enter the values of a, b, c are: 12 13 15

Output:
The area of triangle is: 74.83
*/








