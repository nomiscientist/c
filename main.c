// For warnings and avoid constructs that may be legal in gcc but not in all standard C compilers
//gcc -Wall -Wstrict-prototypes -ansi -pedantic -c foo.cc

//Generate  Assembly Language
//gcc -S helloworld.c
//gcc -S -o my_asm_output.s helloworld.c
//objdump -S --disassemble helloworld > helloworld.dump
#include "tutorial.h"

#include <stdio.h>
#include <string.h>
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

// int max_num(int,int);

// void swap_method(int,int);

// void swap_by_reference(int *x,int *y);
//int max_num(int,int);
//
//void swap_method(int,int);
//
//void swap_by_reference(int *x,int *y);


// void array_as_arg1(int *array1);
// int get_array_size(int array[]);

// int * get_random_numbers(int numbers);

// void get_pointer_parameter(int *pointer);


int main()
{

	//STRUCTURES

    struct packed_struct s;
    s.flaged_integer = 12;
    printf("flaged integer: %d\n",s.flaged_integer);




    // struct Student s1;
    // strcpy(s1.name,"mfaisal");
    // // s1.name="mfaisal";
    // strcpy(s1.father_name,"faqirhussain");
    // s1.roll_number=25;

    // print_struct(&s1);


    //STRINGS
 //   char string[]="mfaisal";
 //   char str2[10];
 //   printf("%s and %d\n",string,GETARRAYSIZE(string));

 //   printf("%d\n",strlen(string));
 //   strcpy(str2,string);
 //   printf("%s\n",str2);
 //    strcat(str2,string);   
 //    printf("%s\n",str2);
 //    printf("%d\n",strcmp(string,str2));
 //   printf("%d\n",strchr(string,'f'));
 //   char *ptr = strchr(string,'f');
	//int index = 0;
	//index = ptr - string;
	//printf("string: %s\n", string);
 //   printf("ptr: %c\n",*ptr);
	//printf("index: %d\n", index);

	//
 //   printf("%d\n",strstr(string,"fa"));
	//int index = 0;
 //   char *ptr2 = strstr(string,"mf");
	//index = ptr2 - string;
	//printf("string: %s\n", string);
 //   printf("ptr2: %c \n",*ptr2);
	//printf("index: %d\n", index);


    //POINTERS

    // int roll_number=31222;
    // printf("before: %d\n",roll_number);
    // get_pointer_parameter(&roll_number);
    // printf("after: %d\n",roll_number);



    // int value=20;
    // int *ptr=NULL;
    // int **pptr=NULL;

    // ptr=&value;
    // pptr=&ptr;

    // printf("address value: %d\n",&value);
    // printf("address ptr: %d\n",ptr);
    // printf("address pptr: %d\n", pptr);
    // printf("value pptr --> ptr --> value : %d\n", **pptr);

	/*char *name[] = { "MFAISAL", "ALI", "AMAD" };

	int size = GETARRAYSIZE(name);

	for (int i = 0; i <size ; i++)
	{
		printf("address ptr[%d]: %s\n", i, name[i]);
		printf("value *ptr[%d]: %s\n", i, *name);

	}*/

	/*int test_array[] = { 1, 2, 3, 4, 5, 6 };
	const int size = GETARRAYSIZE(test_array);
	int *ptr[6];

	for (int i = 0; i < size; i++)
	{
		ptr[i] = &test_array[i];
	}

	for (int i = 0; i < size; i++)
	{
		printf("address ptr[%d]: %d\n", i,ptr[i]);
		printf("value *ptr[%d]: %d\n", i, *ptr[i]);

	}*/





	/*int test_array[] = { 1, 2, 3, 4, 5, 6 };
	int *ptr=NULL;

	ptr = test_array;

	int size = GETARRAYSIZE(test_array);

	while (ptr<&test_array[size])
	{
		printf("address ptr: %d\n", ptr);
		printf("value *ptr: %d \n", *ptr);
		*ptr++;

	}*/


	//for (int i = GETARRAYSIZE(test_array)-1; i >= 0; i--)
	//{
	//	printf("address ptr:%x\n", ptr);
	//	printf("value *ptr, i: %d, %d \n", *ptr, i);
	//	*ptr--;
	//}


    // float f = 9.99;
    
    // float *fp=NULL;
    // printf("address fp:%x\n",fp);
    
    // fp = &f;

    // printf("address fp:%x\n",fp);
    // printf("address &f: %x\n",&f);

    // printf("value f:%f\n",*fp);

    // int a=10;
    // printf("%x\n",&a);



	//ARRAYS

    
    // int *p = get_random_numbers(10);
    // for(int i=0;i<10;i++)
    // {
    //     printf("*p , %d : %d\n",i,*(p+i));
    // }

    // int array1[]={1,2,5,6,7,8};
    // array_as_arg1(array1);
    // int sizeN = sizeof(array1);
    // printf("%d\n",sizeN);
    // int sizeD = sizeof(array1[0]);
    // printf("%d\n",sizeD);
    // double output=sizeN/sizeD;
    // printf("%f\n",output);
    



	//int twoDArray[3][3];
	/*int twoDArray[3][3] = { { 0, 1, 2 },
				  {3,4,5},
				  {6,7,8}
	};

	int array2D[3][3] = { 0, 1, 2, 3, 4, 5, 6, 7, 8};

	for (int i = 0; i < GETARRAYSIZE(twoDArray); i++)
	{
		for (int j = 0; j < GETARRAYSIZE(twoDArray[0]); j++)
		{
			printf(" %d ", twoDArray[i][j]);

		}
		printf("\n");
	}

	printf("%d \n", sizeof(*array2D));*/


	/*int test[5];
	double balance[] = { 1.0, 2.0, 3.0, 5.2 };


	for (int i = 0; i < GETARRAYSIZE(balance); i++)
	{
		printf("balance[%d]= %f\n", i, balance[i]);
	}*/

    

    //SCOPE RULES

    //Functions

    // int x=3, y=2;

    // printf("Before x: %d, y: %d\n", x,y);
    // swap_by_reference(&x,&y);
    // printf("After  x: %d, y: %d\n", x,y);




    // int a=12, b=13;
    // printf("Before a: %d, b: %d\n",a,b);
    
    // swap_method(a,b);

    // printf("After a: %d, b: %d\n",a,b);



    // int num1=5,num2=10;

    // // int r = |num1-num2|;
    // // printf("r:%d\n",r);


    // printf("Enter Num1: ");
    // scanf("%d",&num1);

    // printf("\nEnter num2: ");
    // scanf("%d",&num2);

    // printf("result: %d\n",Add(num1,num2));






    //LOOPS


    // for (int i=0;i<10;i++)
    // {
    //     if(i==5)
    //     {
    //         i++;
    //         goto GOTO;
    //     }
    //     printf("i:%d\n",i);
        
        
    // }

    // GOTO:printf("NONE\n");


    // int j=0;  
    // int i=0;

    // for (i=2;i<100;i++) // i=2,3,4,5
    // {
    //     for (j=2;j<=(i/j);j++) // j=2,3
    //     {
    //         if(!(i%j))
    //         {
    //             break;
    //         }
    //     }        
    //     if(j>(i/j)) 
    //     {
    //         printf("%d is prime\n",i);
    //     }

    // }




    // for(int i=0; i<=10;i++)
    // {
    //     for(int j=0;j<=3;j++)
    //     {
    //         printf("i=%d and j=%d\n",i,j);
    //     }
    // }




    // char str[]="MFaisal";
    // // printf("%s\n",str);
    // // printf("Enter your name? ");
    // // scanf("%s",str);

    // do
    // {
    //     printf("Enter your name? ");
    //     scanf("%s",str);

    // }while(strcmp(str,"mfaisal")==0);

    // str="MFaisal";

    
    
    
    // int a = 10;
    // int i=0;

    // for (i=0; i<10;i++)
    // {
    //     printf("i: %d\n",i);
    // }




    // while(a>5)
    // {   
    //     printf("a: %d\n",a);
    //     a--;
        
    // }



    //DECISION MAKING
    // int a;
    // int b;
    // printf("ENter Number a: ");
    // scanf("%d",&a);
    // printf("ENter Number b: ");
    // scanf("%d",&b);


    // switch(a)
    // {
    //     case 20:
    //     {
    //         printf("case 20\n");
    //         switch(b)
    //         {
    //             case -10:
    //             {
    //                 printf("case -10\n");
    //                 break;
    //             }
    //             case -20:
    //             {
    //                 printf("case -20\n");
    //                 break;
    //             }
    //         }
    //         break;
    //     }
    //     case 10:
    //     {
    //         printf("case 10\n");
    //         break;
    //     }
    //     default:
    //     {
    //         printf("Default\n");
    //         break;
    //     }

    // }

    // // fgets()
    // if (a < b)
    // {
    //     printf("a < 10\n");
    // }
    // else if (a >= 20)
    // {
    //     printf("a >= 20\n");

    // }
    // else
    // {
    //     printf("a>10\n");
    // }






    // OPERATORS

    // int left_value = 2;
    // int right_value = 3;
    // int arthimetic_output;

    // arthimetic_output = left_value + right_value;
    // printf("arthimetic_output: %d\n",arthimetic_output);

    // unsigned int a = 60; // 0011 1100
    // unsigned int b = 13; // 0000 1101

    // unsigned int c;
    // c = a & b;
    // printf("a&b: %d\n",c);

    // c = a | b;
    // printf("a|b: %d\n",c);

    // c = a ^ b;
    // printf("a|b: %d\n",c);
    
    // a |= b;
    // printf("a|=b: %d\n",a);

    // c = ~a;
    // printf("~a: %d\n",c);

    // c = a << 2;
    // printf("a << 2: %d\n",c);

    // c = a >> 2;
    // printf("a>>2: %d\n",c);

    // int a =42;
    // printf("Sizeof(a): %ld \n", sizeof(a));

    // int* ptr;

    // ptr = &a;
    // printf("ptr=&a %d &%d \n",*ptr,a);

    // int b;
    // b = (a<50)?52:0;
    // printf("Value of b: %d\n",b); 



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

// void print_struct(struct Student *s)
// {
//     printf("name: %s\n",s->name);
//     printf("father name: %s\n",s->father_name);
//     printf("roll number: %d\n",s->roll_number);
// }

// void get_pointer_parameter(int *pointer)
// {
//     int value = *pointer;
//     printf("%d\n",value);
//     value++;
//     *pointer=value;
// }

// int * get_random_numbers(int numbers)
// {
//     static int random_numbers[10];
//     srand((unsigned)time(NULL));

//     for(int i=0;i<10;++i)
//     {
//         random_numbers[i]=rand();
//         printf("random_number[%d]= %d\n",i,*(random_numbers+i));
//     }
//     return random_numbers;
// }

// int get_array_size(int array[])
// {
//     int sizeN = sizeof(array);
//     printf("%d\n",sizeN);
//     int sizeD = sizeof(array[0]);
//     printf("%d\n",sizeD);
//     int output = (sizeof(array)/sizeof(array[0]));
//     return output;
// }

// void array_as_arg1(int *array1)
// {
//     int array_size=get_array_size(array1);
//     for(int i=0;i<array_size;i++)
//     {
//         printf("array[%d]=%d\n",i,array1[i]);
//     }
// }


// void swap_by_reference(int *x,int *y)
// {
//     // printf("x: %ls, y: %ls\n",x,y);
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
//     // printf("x: %ls, y: %ls\n",x,y);
// }

// void swap_method(int a,int b)
// {
//     printf("a: %d, b: %d\n",a,b);
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     printf("a: %d, b: %d\n",a,b);

// }

// int Add(int x, int y)
// {
//     // Iterate till there is no carry  
//     while (y != 0)
//     {
//         // carry now contains common set bits of x and y
//         int carry = x & y;  
 
//         // Sum of bits of x and y where at least one of the bits is not set
//         x = x ^ y; 
 
//         // Carry is shifted by one so that adding it to x gives the required sum
//         y = carry << 1;
//     }
//     return x;
// }


// int max_num(int num1,int num2)
// {
//     int result;
//     if(num1<num2)
//     {
//         result = num2;
//     }
//     else
//     {
//         result = num1;
//     }
//     return result;

// }

// int getMax(int a, int b){
//     return (a+b+((a-b)>>sizeof(int)*8-1|1)*(a-b))/2;
// }

// int get_max(int a, int b) {
//     int c = a - b;
//     printf("c: %d\n",c);

//     int k = (c >> 31) & 0x1;
//     printf("c>>31: %d\n",(c >> 31));
//     printf("k: %d\n",k);
//     int max = a - k * c;
//     printf("max: %d\n",max);
//     return max;
// }

// int get_max_with_oneline(int a,int b)
// {
//     return (a-((a-b)>>sizeof(int)&1)*(a-b));
// }


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