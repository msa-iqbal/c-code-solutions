/// Renaming Custom/User-defined DataTypes

#include <stdio.h>

struct teach{
     char name[20];
     int age;
};

int main(){
    typedef struct teach Teacher;    // Renaming DataType Name 
    Teacher t = {"Rayhan Kabir", 45600};

    printf(" Teacher Name: %s \n", t.name);
    printf(" Teacher's age: %d \n", t.age);

    return 0;
}

 /* ===== Output / Result:

 Input:
 ------------------
 // (Initialization values within a program code)

 Output:
 ------------------
 Teacher Name: Rayhan Kabir
 Teacher's age: 45600

*/
