/// Calculate the maximum and minimum number from given numbers

#include <stdio.h>

int main()
{
               int num [100];
               int n, i, max, min;

               printf(" Enter the total numbers: ");
               scanf("%d", &n);

               printf(" Enter %d numbers: ", n);
               for(i=0; i<n; i++){
                    scanf("%d", &num[i]);
               }
                // Calculate maximum number
               max=num[0];
               for(i=1; i<n; i++){
                    if(max<num[i]){
                        max=num[i];
                    }
               }
               // Calculate minimum number
               min=num[0];
               for(i=1; i<n; i++){
                    if(min>num[i]){
                        min=num[i];
                    }
               }

               printf("\n");
               printf(" The maximum number is: %d \n", max);
               printf(" The minimum number is: %d \n", min);

               return 0;
}

/* ===== Output / Result:
Input:
Enter the total numbers: 5
Enter 5 numbers: 10 25 8 65 13

Output:
The maximum number is: 65
The minimum number is: 8
*/



