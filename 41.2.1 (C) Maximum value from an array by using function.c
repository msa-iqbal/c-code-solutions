/// Maximum value from an array by using function

#include <stdio.h>

void display (int x[]){          //User-defined Function
        	int i, max;
        	max=x[0];
        	for(i=0; i<=5; i++){
                 if(max < x[i]){
                    max = x[i];
                 }
        	}
            printf(" Maximum value is: %d  \n", max);
}

int main()              //Main Function & starts to run a program
{
        int num[] = {10, 11, 12, 25, 14, 15};
        display(num);
        return 0;
}

/* ===== Output / Result:
 Input: (attached)
 -------------------------
 10  11  12  25  14  15

 Output:
 -------------------------
 Maximum value is: 25
*/
