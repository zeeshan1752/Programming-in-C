#include <stdio.h>

struct Student {
    int roll_number;
    float marks;
};

union Number {
    int whole;
    float decimal;
};

int main(void)
{
    struct Student student = {101, 87.5f};
    union Number number;

    printf("Student roll number: %d\n", student.roll_number);
    printf("Student marks: %.1f\n", student.marks);

    number.whole = 42;
    printf("Union integer value: %d\n", number.whole);
    number.decimal = 3.5f;
    printf("Union decimal value: %.1f\n", number.decimal);
    printf("A union shares storage between its members (size: %zu bytes).\n",
           sizeof number);

    return 0;
}