#include <stdio.h>



int main() {

    int count[10] = {0};

    int other = 0;

    int c;



    while ((c = getchar()) != EOF) {

        if (c >= '0' && c <= '9') {

            count[c - '0']++;

        } else {

            other++;

        }

    }



    for (int i = 0; i < 10; i++) {

        printf("%d: %d\n", i, count[i]);

    }

    printf("X: %d\n", other);



    return 0;

}


