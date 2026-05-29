// your information goes here

/***************************************

* 25s - Lab07 *

* Author: Vaziri Arvin *

* EECS/Prism username: arvinv *

* Yorku Student #: 221412838 *

* Email: arvinv@my.yorku.ca *

****************************************/



/* Passing array to a function. */



#include <stdio.h>



#define MAX_INPUT 32



// more headers, declarations, as needed

 int largest(int * arr, int n);
void display(int *arr, int n);

int main(int argc, char *argv[])

 {

     int array[MAX_INPUT], count;



     /* Input MAX_INPUT values from the stdin */

     int i;  count=0;

 

     while ( scanf("%d", &i) != EOF){

        *(array + count) = i;  // store input in array[count] without using []

        count++;

     }





      /* Call the functions and display the returned value. */

      printf("Inputs: ");

      display(array, count);





      printf("\nLargest value: %d\n", largest(array, count));



     return 0;

 }



 /* displays the content of the parameter integer array */

 void display(int *arr, int n)

 {
	for (int i = 0; i < n; i++){
	printf("%d ",*(arr + i));
	}
//	printf("\n");
 }





/* this function returns the largest value */

/* in the parameter integer array who has n elements */

 int largest(int * arr, int n)

 {
 int largest = *(arr);

	for (int i = 0; i < n;i++){
		if(*(arr + i) > largest)
		{
		largest = *(arr + i);
		}
	}
  return largest;

 }
