/***************************************

* 25s - Lab05                          *

* Author: Vaziri, Arvin               *

* EECS/Prism username: arvinv         *

* Yorku Student #: 221412838          *

* Email: arvinv@my.yorku.ca           *

****************************************/



#include <stdio.h>

#include <stdlib.h>



void printBinary(int n);  // from binaryFunction.c



int packRGB(int r, int g, int b) {

    return (r << 16) | (g << 8) | b;

}



int unpackRed(int packed) {

    return (packed >> 16) & 0xFF;

}



int unpackGreen(int packed) {

    return (packed >> 8) & 0xFF;

}



int unpackBlue(int packed) {

    return packed & 0xFF;

}



int main() {

    int r, g, b;



    printf("Enter R G B values (0–255): ");

    while (scanf("%d %d %d", &r, &g, &b) == 3) {

        if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255) {

            printf("Each value must be between 0 and 255.\n");

            continue;

        }



        int packed = packRGB(r, g, b);



        printf("Packed RGB: %d (hex: 0x%06X)\n", packed, packed);

        printBinary(packed);

        printf("\n");



        printf("Unpacked → R: %d, G: %d, B: %d\n\n", unpackRed(packed), unpackGreen(packed), unpackBlue(packed));

        printf("Enter R G B values (0–255): ");

    }



    return 0;

}


