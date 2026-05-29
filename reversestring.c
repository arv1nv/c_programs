#include <stdio.h>
#include <string.h>

void reversestring(char s[]){

int n = strlen(s);

int j = n - 1;
	for(int i = 0; i < (n / 2);i++){
	char temp = *(s + i);
	*(s + i) = *(s + j);
	*(s + j) = temp;
	j--;
	}



}




int main(){


char word[] = "Hello";

reversestring(word);

printf("%s\n", word);



}
