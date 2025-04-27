/// Size of Union & Structure DataTypes

#include <stdio.h>

union test1{
    int x, y;
    float f;
};

union test2{
    int x, y;
    char ch[20];
    float f;
};

union test3{
    int x;
    char ch;
    double d;
};

struct test4{
    int x;
    int y;
    // char ch;   //*** Char DataType doesn't work for 'Struct'
    double z;
};

int main(){

    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;

    printf(" Size of test1 = %d byte\n", sizeof(t1));
    printf(" Size of test2 = %d byte\n", sizeof(t2));
    printf(" Size of test3 = %d byte\n", sizeof(t3));

    // Print Size of variable of Structure DataType
    printf(" Size of test4 = %d byte\n", sizeof(t4));
    return 0;	
}


/* ===== Output / Result:
 Input:
 ------------------
 // (Initialization values within a program code)

 Output:
 ------------------
 Size of test1 = 4 byte
 Size of test2 = 20 byte
 Size of test3 = 8 byte
 Size of test4 = 16 byte
*/
