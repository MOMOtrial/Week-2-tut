#include <stdio.h>

// Variable sub in --> format specifiers
// %d = intergers (int)
// %f = float  %[width].[precision][type]
//%c = characters (char)
int main() {
    float height = 16;
    int age = 32;
    printf("Height is %f and age is %d\n", height, age);

    float y = 4.83;
    printf("\tThe value of y is %8.2f", y);

    char example = '\"';
    printf("%c", example);
}
