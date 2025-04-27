/// Passing values of array to function

#include <stdio.h>

void display (int x[]){          //User-defined Function
        	int i;
        	for(i=0; i<=5; i++){
                    printf("%d  ", x[i]);
        	}
        	printf("\n");
}

int main()              //Main Function & starts to run a program
{
        int num[] = {10, 11, 12, 13, 14, 15};
        display(num);
        return 0;
}

/* ===== Output / Result:
 Input: (attached)
 -------------------------
 10  11  12  13  14  15

 Output:
 -------------------------
 10  11  12  13  14  15
*/
