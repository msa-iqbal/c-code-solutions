/// Structure_Array within Structure

#include <stdio.h>

struct teacher{ // Create Structure
        char name[50];
        int age;
        float salary;
};

//main function & starts to run a program
int main()
{
      struct teacher info[3]; int i;

      //Insert values to structure_array
      for(i=0; i<3; i++){
            printf("\n Enter Information %d : \n", i+1);
            printf(" Enter Name: ");
            fflush(stdin); //for using gets() function
            gets(info[i].name);
            printf(" Enter Age: ");
            scanf("%d", &info[i].age);
            printf(" Enter Salary: ");
            scanf("%f", &info[i].salary);
        }

        //Showing values from structure_array
        for(i=0; i<3; i++){
            printf("\n Information %d : \n", i+1);
            printf(" Name: %s \n", info[i].name);
            printf(" Age: %d \n", info[i].age);
            printf(" Salary: %.2f \n", info[i].salary);
        }

        return 0;
}

/* ===== Output / Result:
 Input:
 ------------------
 Enter Information 1 :
 Enter Name: Micheal
 Enter Age: 26
 Enter Salary: 2600.023

 Enter Information 2 :
 Enter Name: Junior LJ
 Enter Age: 15
 Enter Salary: 1200.36

 Enter Information 3 :
 Enter Name: Linkon
 Enter Age: 30
 Enter Salary: 3000.545

 Output:
 ------------------
 Information 1 :
 Name: Micheal
 Age: 26
 Salary: 2600.02

 Information 2 :
 Name: Junior LJ
 Age: 15
 Salary: 1200.36

 Information 3 :
 Name: Linkon
 Age: 30
 Salary: 3000.54
*/







