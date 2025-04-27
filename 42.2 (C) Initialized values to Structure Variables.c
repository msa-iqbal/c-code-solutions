/// Initialized values to Structure Variables

#include <stdio.h>

struct teacher{ // Create Structure
        int age;
        float salary;
};

//main function & starts to run a program
int main()
{
        struct teacher info1 = {26, 1687.362}; // Initialize Structure Variables
        struct teacher info2, info3;

        // Structure Element Assignment
        info2.age=27;
        info2.salary=1547.369;

        // Structure Variable Assignment
        info3 = info2;

        printf(" Information 1: \n");
        printf(" Teacher age: %d \n", info1.age);
        printf(" Teacher salary: %.2f \n", info1.salary);

        printf("\n\n Information 2: ");
        printf(" Teacher age: %d \n", info2.age);
        printf(" Teacher salary: %.2f \n", info2.salary);

        printf("\n\n Information 3: \n");
        printf(" Teacher age: %d \n", info3.age);
        printf(" Teacher salary: %.2f \n", info3.salary);

        return 0;
}


/* ===== Output / Result:
 Input:
 ------------------
 (Initialization values within a program code)

 Output:
 ------------------
 Information 1:
 Teacher age: 26
 Teacher salary: 1687.36

 Information 2:
 Teacher age: 27
 Teacher salary: 1547.37

 Information 3:
 Teacher age: 27
 Teacher salary: 1547.37
*/
