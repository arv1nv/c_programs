
#include <stdio.h>



void printBinary(int val) {

    for (int i = 31; i >= 0; i--) {

        putchar((val & (1 << i)) ? '1' : '0');

        if (i % 8 == 0 && i != 0) putchar(' ');

    }

}


