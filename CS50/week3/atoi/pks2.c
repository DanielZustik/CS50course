#include <stdio.h>

void print_reverse(char *str) {
    if (*str == '\0') {
        return;
    } else {
        print_reverse(str + 1);
        putchar(*str);
    }
}

int main() {
    char str[] = "Hello, world!";
    printf("Original string: %s\n", str);
    printf("Reversed string: ");
    print_reverse(str);
    putchar('\n');
    return 0;
}