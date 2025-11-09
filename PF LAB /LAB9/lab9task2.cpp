#include <stdio.h>//CT-173
int main() {
    int y = 5;
    int z = 6;
    int const *yPtr = &y;

    printf("yPtr points to address: %p\n", yPtr);

    yPtr = &z;
    printf("Now yPtr points to address: %p\n", yPtr);

    return 0;
}

