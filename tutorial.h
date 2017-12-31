// struct Student
// {
//     char name[20];
//     char father_name[20];
//     int roll_number;
// };

// void print_struct(struct Student s);
// void print_struct(struct Student *s);


#define GETARRAYSIZE(array_name) (sizeof(array_name)/sizeof(array_name[0]))

struct
{
    int yes;
    int no;
}not_bit_optimized;

struct
{
    int yes:1;
    int no:1;
}bit_optimized;



// union Data
// {
//     int test_i;
//     char *str;
// };



// struct packed_struct
// {
//     unsigned int flaged_integer:8;
// };
