  /// Implement linear search by using 1D Array
/*
        let, int num[] = { 10, 2, 30, 15, 28, 5 }
            Search the value = 15

        1. Is the item found
        2. If yes then what's the position?
*/

#include <stdio.h>

int main()
{
        int num[100];
        int n, i, value, position;

        printf(" Enter the total number of values: ");
        scanf("%d", &n);

        // Insert the values (to array)
        printf(" Enter the %d values: ", n);
        for(i=0; i<n; i++){
            scanf("%d", &num[i]);
        }

        position=-1;
        printf(" Enter the value you want to search: ");
        scanf("%d", &value);

         // Search the values from array
        for(i=0; i<n; i++){
            if(value==num[i]){
                position=i+1;
                break;
            }
        }
        // Showing result from calculation
        printf("\n");
        if(position==-1){
            printf(" Item isn't found");
        }
        else{
            printf(" The value is found at position: %d \n",position);
        }

        return 0;
}

/* ===== Output / Result:
Input:
Enter the total number of values: 5
Enter the 5 values: 10 12 25 13 29
Enter the value you want to search: 13

Output:
The value is found at position: 4
*/




