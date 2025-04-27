/// Calculate Summation & Average from given numbers

#include <stdio.h>

int main()
{
               int num [100];
               int n, sum=0, i;

               printf(" Enter the total numbers: ");
               scanf("%d", &n);

               printf(" Enter %d numbers: ", n);
               for(i=0; i<n; i++){
                    scanf("%d", &num[i]);
               }

               for(i=0; i<n; i++){
                    sum=sum+num[i];
               }
               printf("\n");
               printf(" The summation is: %d \n", sum);
               printf(" The average is: %.2f \n", (float) sum/n);

               return 0;
}

/* ===== Output / Result:
Input:
Enter the total numbers: 4
Enter 4 numbers: 25 20 18 10

Output:
The summation is: 73
The average is: 18.25
*/


