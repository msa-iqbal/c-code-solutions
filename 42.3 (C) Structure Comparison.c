/// Structure Comparison

#include <stdio.h>

struct teacher{ // Create Structure
		    int age;
		    float salary;
};

//main function & starts to run a program
int main()
{
        struct teacher info1 = {26, 1687.362};
        struct teacher info2, info3;

        // Structure Element Assignment
        info2.age=27;
        info2.salary=1547.369;

        // Structure Variable Assignment
        info3 = info2;

        // Structure Comparison
        if(info1.age==info2.age && info1.salary == info2.salary)
            printf(" Information1 == Information2");
        else
             printf(" Information1 != Information2");

        return 0;
}


/* ===== Output / Result:
 Input:
 ------------------
 (Initialization values within a program code)

 Output:
 ------------------
 Information1 != Information2
*/

