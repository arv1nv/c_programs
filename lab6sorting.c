// your information goes here

/***************************************

* 25s - Lab06 *

* Author: Vaziri, Arvin *

* EECS/Prism username: arvinv *

* Yorku Student #: 221412838 *

* Email: arvinv@my.yorku.ca *

****************************************/



#include <stdio.h>

#include <string.h>



#define SIZE 56 

// more headers, declarations, as needed

void sortArr (char * arr);
void sortArr2 (char * arr);

int main()

{

   int stop = 0;

   char arr[SIZE]; char arrB[SIZE];

   fgets(arr,SIZE,stdin);


   while (stop == 0)

   {
      if (strcmp(arr, "quit\n") == 0) {

  	 stop = 1;

   	} else {

      /// ... // manually remove (replace) the trailing \n in the first place

       arr[strlen(arr) - 1] = '\0';
      // printf("%s\n", arr);

       strcpy(arrB, arr);



       sortArr(arr);

       printf("%s\n", arr);



       sortArr2(arrB);

       printf("%s\n\n", arrB);



       //....
       fgets(arr,SIZE,stdin);

    }

    }

   return 0;

}



// two sorting function definitions

void sortArr (char * arr){

int n = strlen(arr);

for (int i = 0; i <= n-2; i++) {

	for (int j = n-1; j >= i+1; j--){
		if (*(arr + j) < *(arr + j - 1)){
 		char temp = *(arr + j);
		*(arr + j) = *(arr + j - 1);
		*(arr + j - 1) = temp;

		}

        }

}

}



void sortArr2 (char * arr){

int n = strlen(arr);

for (int i = 0; i <= n-2; i++) {

	int smallest = i;
	for (int j = i+1; j <= n-1; j++){
		if (*(arr + j) < *(arr + smallest)) {
		smallest = j;
		}
	}
	char temp = *(arr + i);
        *(arr + i) = *(arr + smallest);
        *(arr + smallest) = temp;
	}



}






