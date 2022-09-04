#include <iostream>

int main(void) {
    int variable;
    variable = 5;
    int *pointer;
    pointer = &variable;
    printf("%p \n", &variable);
    printf("%d" ,variable);
    return 0;
}