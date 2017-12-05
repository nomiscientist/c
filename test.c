#include <stdio.h>
// #include <float.h>

// variable declaration
extern int a;
extern float f;
extern double d;
extern char c;

int sample_funtion();


int main()
{
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
    int a = 0;
    float f = 0.0;
    double d = 0.0000;
    char c = 'c';
    // byte z = 22;

    printf("Printing int : %d\n",a);
    sample_funtion();



    return 0;
}


int sample_funtion()
{
    printf("I'm sample funtion\n");
}