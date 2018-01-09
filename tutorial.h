// struct Student
// {
//     char name[20];
//     char father_name[20];
//     int roll_number;
// };

// void print_struct(struct Student s);
// void print_struct(struct Student *s);


#define GETARRAYSIZE(array_name) (sizeof(array_name)/sizeof(array_name[0]))
typedef char  *STRING;
#define AUTHOR "MFAISAL"

#undef AUTHOR
#define AUTHOR "MUHAMMAD_FAISAL"

#ifndef MESSAGE
    #define MESSAGE "HELLO PAKISTAN!"
#endif

#ifdef AUTHOR
    #define PRINT AUTHOR
#endif

#define message(a) \
    printf(#a "\n")  

#define tokenpaster(n) printf("token"#n"=%d\n",token##n)

#if defined(MESSAGE)
    #define PRINTAGAIN "YES MESSAGE IS DEFINED"
#endif

#define square(number) (number*number)



// struct Record
// {
//     int value;
//     STRING name;
// };



// struct
// {
//     int yes;
//     int no;
// }not_bit_optimized;

// struct
// {
//     int yes:1;
//     int no:1;
// }bit_optimized;



// union Data
// {
//     int test_i;
//     char *str;
// };



// struct packed_struct
// {
//     unsigned int flaged_integer:8;
// };
