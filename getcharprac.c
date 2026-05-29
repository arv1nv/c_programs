#include <stdio.h> // define EOF



int main(){

  int c;

  int count = 0;

  int acount = 0;

  int newline = 0;

  int blanks = 0;

  c = getchar();

  while(c != EOF)  /* no end-of-file yet */

  { 
    if (c != '\n'){
    count++;  // spaces and '\n' also counted
    } else {
    newline++;
    }
    if (c =='a'){
       acount++;
    }

    if (c == ' '){
       blanks++;
    }


    c = getchar(); /* read next */

  }

  printf("# of chars: %d\n",count);
  printf("# of 'a's: %d\n", acount);
  printf("# of blanks: %d\n", blanks);
  printf("# of lines: %d\n", newline);
}


