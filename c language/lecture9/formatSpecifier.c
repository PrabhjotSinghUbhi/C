#include <stdio.h>
#define HELLO 3.14

int main() {
    int i = 10;
    float f = 3.14;
    double d = 3.14159;
    char c = 'A';
    char str[] = "Hello, World!";
    unsigned int ui = 25;
    long l = 1234567890;
    unsigned long ul = 987654321;
    short s = 123;
    unsigned short us = 456;
    long long ll = 123456789012345;
    unsigned long long ull = 123456789012345;

    printf("Integer: %d\n", i);
    printf("Float: %.2f\n", f);
    printf("Double: %.5lf\n", d);
    printf("Character: %c\n", c);
    printf("String: %s\n", str);
    printf("Unsigned integer: %u\n", ui);
    printf("Long integer: %ld\n", l);
    printf("Unsigned long integer: %lu\n", ul);
    printf("Short integer: %hd\n", s);
    printf("Unsigned short integer: %hu\n", us);
    printf("Long long integer: %lld\n", ll);
    printf("Unsigned long long integer: %llu\n", ull);

    int fgg = 5 + HELLO;

    printf("%d",fgg);

    return 0;
}
