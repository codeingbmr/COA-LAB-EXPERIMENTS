#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10;
    int b = 20;

    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 50;

    printf("a = %d, b = %d, *ptr = %d\n", a, b, *ptr);

    free(ptr);
    return 0;
}