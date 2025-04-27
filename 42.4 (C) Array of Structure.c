/// Array of Structure

#include <stdio.h>

struct teacher{ // Create Structure
		    int age;
		    float salary;
};

//main function & starts to run a program
int main()
{
        struct teacher info[3]; // Create Structure Array
        int i;

        //Insert values to structure_array
        for(i=0; i<3; i++){
            printf(" Enter Information %d : \n", i+1);
            printf(" Enter Age: ");
            scanf("%d", &info[i].age);
            printf(" Enter Salary: ");
            scanf("%f", &info[i].salary);
        }

        //Showing values from structure_array
        for(i=0; i<3; i++){
            printf("\n Information %d : \n", i+1);
            printf(" Age: %d \n", info[i].age);
            printf(" Salary: %.2f \n", info[i].salary);
        }

        return 0;
}
/* ===== Output / Result:
 Input:
 ------------------
 Enter Information 1 :
 Enter Age: 23
 Enter Salary: 2654.32
 Enter Information 2 :
 Enter Age: 25
 Enter Salary: 3062.369
 Enter Information 3 :
 Enter Age: 29
 Enter Salary: 4025.369

 Output:
 ------------------
 Information 1 :
 Age: 23
 Salary: 2654.32

 Information 2 :
 Age: 25
 Salary: 3062.37

 Information 3 :
 Age: 29
 Salary: 4025.37
*/




