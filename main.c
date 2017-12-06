// For warnings and avoid constructs that may be legal in gcc but not in all standard C compilers
//gcc -Wall -Wstrict-prototypes -ansi -pedantic -c foo.cc

//Generate  Assembly Language
//gcc -S helloworld.c
//gcc -S -o my_asm_output.s helloworld.c
//objdump -S --disassemble helloworld > helloworld.dump

#include <stdio.h>
// #include <float.h>

// variable declaration
// extern int a;
// extern float f;
// extern double d;
// extern char c;

// extern void write_extern();
// int counter;



// int sample_funtion(void);
// static int count = 5;


// #define AUTHOR "MFAISAL"
// #define NUM 007
// #define NEWLINE '\n'


int main()
{
    // OPERATORS

    int left_value = 2;
    int right_value = 3;
    int arthimetic_output;

    arthimetic_output = left_value + right_value;
    printf("arthimetic_output: %d\n",arthimetic_output);

    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101

    unsigned int c;
    c = a & b;
    printf("a&b: %d\n",c);

    c = a | b;
    printf("a|b: %d\n",c);

    c = a ^ b;
    printf("a|b: %d\n",c);
    
    a |= b;
    printf("a|=b: %d\n",a);

    c = ~a;
    printf("~a: %d\n",c);

    c = a << 2;
    printf("a << 2: %d\n",c);

    c = a >> 2;
    printf("a>>2: %d\n",c);

    int a =42;
    printf("Sizeof(a): %ld \n", sizeof(a));

    int* ptr;

    ptr = &a;
    printf("ptr=&a %d &%d \n",*ptr,a);

    int b;
    b = (a<50)?52:0;
    printf("Value of b: %d\n",b); 



    // STORAGE CLASSES

    // sample_funtion();

    // write_extern();

    // register int age;
    // age = 24;
    // printf("register int age: %d\n",age);

    // while(count--)
    // {
    //     sample_funtion();
    // }


    // const int AGE = 24;
    // const char ALERT = '\a';

    // printf("const int AGE= %d\n", AGE);
    // printf("const char ALERT=%c\n",ALERT);


    // printf("#define AUTHOR NAME: %s\n", AUTHOR);
    // printf("#define NUM: %d\n", NUM);
    // printf("#define NEWLINE: %cnextline\n", NEWLINE);


    // printf("Hello, PAKISTAN!\n");
    // printf("Hello, World!\n"); 

    // DataTypes

    // printf("size of %ld\n",sizeof(int));
    // printf("SIze float: %ld\n",sizeof(float));
    // printf("FLT_MIN: %f\n",FLT_MIN);
    // printf("FLT_MAX: %f\n",FLT_MAX);
    // printf("FLT_DIG: %d\n",FLT_DIG);
    

    // Variables
    //variable definition + initilization
    // int a = 0;
    // float f = 0.0;
    // double d = 0.0000;
    // char c = 'c';
    // // byte z = 22;

    // printf("Printing int : %d\n",a);
    // sample_funtion();

    // Constants and literals

    return 0;
}


// int sample_funtion(void)
// {
//     static int i = 5;
//     i++;
//     printf("i: %d, count: %d\n",i,count);


//     // int mount;   
//     // auto int month;
//     // month = 12;
//     // printf("I'm sample funtion\n");
//     // printf("auto int month=%d\n",month);
//     return 0;
// }