/// Passing Structure_Variables to a function

#include <stdio.h>

struct teacher{ // Create Structure
    char name[50];
    int age;
    float salary;
};

// function declare
void display (struct teacher in){   // void f_name(struct structure_name parameter)
    printf("\n Name: %s \n", in.name);
    printf(" Age: %d \n", in.age);
    printf(" Salary: %.2f \n", in.salary);
}

//main function & starts to run a program
int main()
{
        struct teacher info1, info2;

        // for info1 function
        strcpy(info1.name, "Michael Scofield"); //bcz, string doesn't directly initialize
        info1.age=26;
        info1.salary=2569.90;
        display(info1);

         // for info2 function
        strcpy(info2.name, "Jonior LJ");
        info2.age=15;
        display(info2);

        return 0;
}

/* ===== Output / Result:
 Input:
 ------------------
 (Initialization values within a program code)

 Output:
 ------------------
 Name: Michael Scofield
 Age: 26
 Salary: 2569.90

 Name: Jonior LJ
 Age: 15
 Salary: 0.00
*/


