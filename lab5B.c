#include <stdio.h>



int main() {

    int c;

    while ((c = getchar()) != EOF) {

        if (c >= 'a' && c <= 'z') {

            putchar(c - ('a' - 'A'));

        } else if (c >= '0' && c <= '9') {

            if (c < '5') putchar('-');

            else if (c > '5') putchar('+');

            else putchar(c);

        } else {

            putchar(c);

        }

    }

    return 0;

}


