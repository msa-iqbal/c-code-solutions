/// Input Structure Elements

#include <stdio.h>

struct teacher{ // Create Structure
    int age;
    float salary;
};

 //main function & starts to run a program
int main()
{
      struct teacher info1, info2;

      // Input Structure Elements
      printf(" Teacher age: ");
      scanf("%d", &info1.age);
      printf(" Teacher salary: ");
      scanf("%f", &info2.salary);

       // Showing Result
       printf(" Teacher age: %d \n", info1.age);
       printf(" Teacher salary: %.2f \n", info2.salary);

       return 0;
}

/* ===== Output / Result:
 Input:
 ------------------
 Teacher age: 26
 Teacher salary: 1536.36

 Output:
 ------------------
 Teacher age: 26
 Teacher salary: 1536.36
*/


