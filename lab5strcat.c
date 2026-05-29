//program for my_strcat.c

/***************************************

* 25s - Lab05                          *

* Author: Vaziri, Arvin               *

* EECS/Prism username: arvinv         *

* Yorku Student #: 221412838          *

* Email: arvinv@my.yorku.ca           *

****************************************/



#include <stdio.h>

#include <string.h>



#define SIZES 35



// your version of strcat implementation here

void my_strcat(char des[], char src[]) {

    int i = 0;

    // move to the end of the destination string

    while (des[i] != '\0') {

        i++;

    }



    // append each char from src to des

    int j = 0;

    while (src[j] != '\0') {

        des[i] = src[j];

        i++;

        j++;

    }



    des[i] = '\0'; // terminate the final string

}



int main() {

    char a[SIZES];

    char b[SIZES];

    char c[SIZES];

    char d[SIZES];



    scanf("%s", a);

    scanf("%s", b);



    while (strcmp(a, "quit") != 0 && strcmp(b, "quit") != 0) {

        strcpy(c, a); // original a for your version

        strcpy(d, b); // original b for your version



        strcat(a, b);      // system strcat

        my_strcat(c, d);   // your version



        printf("strcat:   %s\n", a); 

        printf("mystrcat: %s\n\n", c);



        scanf("%s", a);

        scanf("%s", b);

    }



    return 0;

}


