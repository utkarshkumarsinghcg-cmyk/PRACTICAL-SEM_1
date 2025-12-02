// Read a string and reverse it in place
#include <stdio.h>

int main() {
    char str[] = "Apple";

    printf("Reversed string: ");
    for (int i = 4; i >= 0; i--) {   
        printf("%c", str[i]);
    }

    return 0;
}
