// struct Student
// {
//     char name[20];
//     char father_name[20];
//     int roll_number;
// };

// void print_struct(struct Student s);
// void print_struct(struct Student *s);


#define GETARRAYSIZE(array_name) (sizeof(array_name)/sizeof(array_name[0]))

struct packed_struct
{
    int flaged_integer:4;
};
