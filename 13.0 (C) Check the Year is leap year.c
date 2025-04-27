/// Check the Year is leap year or not?

/* Leap year calculate formula:
       Year%400 = 0
       OR
       Year%4 = 0
       OR
       Year%100 != 0
*/
#include <stdio.h>

int main()
{
              int year;
              printf("Enter any year: ");
              scanf("%d", &year);

              if(year%400 == 0){
                    printf("\n This Year is Leap Year \n");
              }
              else if ((year%4 == 0) && (year%100 != 0)){
                    printf("\n This Year is Leap Year \n");
              }
              else
                    printf("\n Not Leap Year \n");

              return 0;
}


/* ===== Output / Result:
Input:
Enter any year: 2012

Output:
This Year is Leap Year
*/
