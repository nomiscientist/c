#include <stdio.h>
// #include <float.h>

// variable declaration
// extern int a;
// extern float f;
// extern double d;
// extern char c;

extern void write_extern();
int counter;



int sample_funtion(void);
static int count = 5;


// #define AUTHOR "MFAISAL"
// #define NUM 007
// #define NEWLINE '\n'


int main()
{

    // STORAGE CLASSES

    // sample_funtion();

    write_extern();

    register int age;
    age = 24;
    printf("register int age: %d\n",age);

    while(count--)
    {
        sample_funtion();
    }


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


int sample_funtion(void)
{
    static int i = 5;
    i++;
    printf("i: %d, count: %d\n",i,count);


    // int mount;   
    // auto int month;
    // month = 12;
    // printf("I'm sample funtion\n");
    // printf("auto int month=%d\n",month);
    return 0;
}