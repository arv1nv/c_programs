#include <stdio.h>



int isDigit(char c) {

    return c >= '0' && c <= '9';

}



int isLetter(char c) {

    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');

}



int isOperator(char c) {

    return c == '+' || c == '-' || c == '*' || c == '/' || c == '%';

}



int main() {

    int num;

    char ch;



    while (1) {

        printf("Enter an integer and a character separated by blank: ");

        scanf(" %d %c", &num, &ch);



        if (num == -10000) break;



        if (isDigit(ch)) {

            int value = ch - '0';

            printf("Character '%c' represents a digit. Sum of %d and %d is %d\n\n", ch, num, value, num + value);

        } else if (isLetter(ch)) {

            printf("Character '%c' represent a letter\n\n", ch);

        } else if (isOperator(ch)) {

            printf("Character '%c' represents an operator\n\n", ch);

        } else {

            printf("Character '%c' represents others\n\n", ch);

        }

    }



    return 0;

}


