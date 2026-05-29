
/***************************************

* 25s - Lab05                         *

* Author: Vaziri, Arvin              *

* EECS/Prism username: arvinv        *

* Yorku Student #: 221412838         *

* Email: arvinv@my.yorku.ca          *

****************************************/



#include <stdio.h>

#include <stdlib.h>  // for atoi

#include <string.h>  // for strlen



#define SIZE 14

 

int my_atoi(char c[]) {

    int len = strlen(c);

    int value = 0;

    int multiplier = 1;



    // Start from rightmost digit

    for (int i = len - 1; i >= 0; i--) {

        value += (c[i] - '0') * multiplier;

        multiplier *= 10;

    }



    return value;

}

 

int main() {

    int a, b;

    char arr[SIZE];



    printf("Enter a word of positive number or 'quit': ");

    scanf("%s", arr);



    while (strcmp(arr, "quit") != 0) {

        printf("%s\n", arr);



        a = atoi(arr);

        printf("atoi:    %d (%#o, %#X)\t%d\t%d\n", a, a, a, a * 2, a * a);



        b = my_atoi(arr);

        printf("my_atoi: %d (%#o, %#X)\t%d\t%d\n\n", b, b, b, b * 2, b * b);



        printf("Enter a word of positive number or 'quit': ");

        scanf("%s", arr);

    }



    return 0;

}


