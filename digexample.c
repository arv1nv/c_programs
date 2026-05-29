#include <stdio.h>

#define MAX_SIZE 80

int isDigit(char c);

int isLetter(char c);

int isOperator(char c);

int isQuit (char arr[]);

int occurrence(char arr[], char c);

int length(char arr[]);

void displayStr(char word[]);


int main() {



   char word[MAX_SIZE];

   char c;



   char helloArr[]  = "helloWorld";

   printf("\"%s\" contains %d characters, but the size is %d (bytes)\n", helloArr, length(helloArr), sizeof(helloArr));

   helloArr[5] = '\0'; helloArr[3]='X'; helloArr[7] ='Y';

   printf("\"%s\" contains %d characters, but the size is %d (bytes)\n\n", helloArr, length(helloArr), sizeof(helloArr));





   /********** Fill in your code below **********/

   printf("Enter a word and a character separated by blank: ");

   scanf("%s %c", word, &c );

   

   while (isDigit(c) != 0){

     // don't change these first two lines

     printf("Input word is \"");

     displayStr(word);

    // ....



   }

}



//functions to implement


int isLetter(char c) {
   if (( c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z')) return 1;

   return 0;
}

int isOperator(char c) {
   
  if ( (c == '+') || (c == '-') || (c == '/') || (c == '*') || (c == '%') ) return 1;

  return 0;
}


int isDigit(char c){
   if (c >= '0' && c <= '9') return 1;
   else return 0;
}



int length(char arr[]){

int count = 0;

 for (int i = 0; arr[i] != '\0'; i++){
     count++;
 }

return count;

}



int indexOf(char arr[], char c) {

 for (int i = 0; i < length(arr); i++){
    if (arr[i] == c) {
   return i;
   }
   }
 return -1;
}



int occurrence(char arr[], char c) {

int count = 0;

 for (int i = 0; i < length(arr); i++){
    if (arr[i] == c) {
	count++;
    }
 }

 return count;

}









void displayStr(char word[]) {

   for (int i = 0; i++; i < length(word)){
      putchar(word[i]);
   }

   putchar('\n');
}





int isQuit (char arr[])

{

 int i;

 if (arr[0]=='q' && arr[1]=='u' && arr[2]=='i' && arr[3]=='t')

    return 1; 

 else 

    return 0;

}
