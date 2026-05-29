/***************************************

* 25s - Lab07 *

* Author: Vaziri, Arvin *

* EECS/Prism username: arvinv *

* Yorku Student #: Your student number *

* Email: arvinv *

****************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getsum(char *argv[], int n){

  int sum = 0;

  for(int i = 2; i < n;i++){

  sum += atoi(argv[i]);

  }

  return sum;

}

int getdiff(char *argv[], int n){

  int diff = 0;

  for(int i = 2; i < n;i++){

  diff -= atoi(argv[i]);

  }

  return diff;


}



int main(int argc, char *argv[] )
{

printf("There are %d arguments (excluding \"%s\")\n", (argc - 1), argv[0]);

if (strcmp(argv[1], "sum") == 0){

  for (int i = 2; i < argc; i++){

  printf("%s", argv[i]);
  if (i < argc - 1)
  {
  printf(" + ");
  }
  }

  printf("\n");

  int sum = 0;

  sum = getsum(argv, argc);

  printf("= %d\n", sum);

}

if (strcmp(argv[1], "diff") == 0) {

  for (int i = 2; i < argc; i++){

  printf("%s", argv[i]);
  if (i < argc - 1)
  {
  printf(" + ");
  }
  }

  printf("\n");


  int diff = 0;

  diff = getdiff(argv, argc);

  printf("= %d\n", diff);

}




return 0;

}
