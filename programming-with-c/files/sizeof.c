#include <stdio.h>

int main(void) {
    printf("Data Types         Size(bytes)\n");
    printf("==============================\n");
    printf("char                %2d\n", sizeof(char));
    printf("int                 %2d\n", sizeof(int));
    printf("float               %2d\n", sizeof(float));
    printf("double              %2d\n", sizeof(double));
}