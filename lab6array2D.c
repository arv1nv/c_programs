// your information goes here

/***************************************

* 25s - Lab06 *

* Author: Vaziri, Arvin *

* EECS/Prism username: arvinv *

* Yorku Student #: 221412838 *

* Email: arvinv@my.yorku.ca *

****************************************/



/* Reads in a list of strings from the keyboard, then re-organize them */

 /* and then displays them on the screen. */



 #include <stdlib.h>

 #include <stdio.h>

 #include <string.h>



 #define MAX_LINES 34

 #define MAX_COLS  54 


void print2D(char p[][MAX_COLS], int n);
void exchange2D(char p[][MAX_COLS], int n);

int main()



 {

     char inputs[MAX_LINES][MAX_COLS];

     printf("sizeof inputs: %d\n\n", sizeof inputs);

 

     /* Read in the lines from the stdin (keyboard) now, using function fgets() */



     int row = 0;
     int stop = 0; 
     char temp[MAX_COLS];   
 
     while (stop == 0)

     {
      printf("Enter string: ");
      fgets(inputs[row], MAX_COLS, stdin) != NULL;
      printf("%s", inputs[row]);
      if (strcmp(inputs[row], "xxx\n") == 0) {
      stop = 1;
      } else row++;
      

     }

     printf("\n");


     // displays the array by calling sub-function print2D(...)

     print2D(inputs, row);

     // swaps the first and second row here

     strcpy(temp, inputs[0]);
     strcpy(inputs[0], inputs[1]);
     strcpy(inputs[1], temp);


     // calls sub-function exchange2D() to swap some other rows

     exchange2D(inputs, row);

     printf("\n== after swapping ==\n");



     // displays the (exchanged array) by calling sub-function print2D() 

     print2D(inputs, row);

     return 0;

 }





 // Exchange of rows. need to involve data movement 

 void exchange2D(char p[][MAX_COLS], int n)

 {

  char temp[MAX_COLS];

  for (int i = 2; i < (n - 1); (i = i + 2))
  {

  strcpy(temp, p[i]);
  strcpy(p[i], p[i + 1]);
  strcpy(p[i + 1], temp);

  }
 }



 // output the 2D array, row by row

 void print2D(char p[][MAX_COLS], int n)

 {
 for (int i = 0; i < n; i++)
 {
 printf("[%d]: %s", i, p[i]);
 }
 }


