#include <stdio.h>

int main(){

char name[80];

int age;

int triple;

int dd;

printf("Please Enter Your Name: ");

scanf("%s", name );

printf("Your name is %s\n", name);

printf("Please enter your age: ");

scanf("%d", &age);

printf("You are %d years old\n", age);

dd = age * 2;

triple = age * 3;

printf("Double and Triple are of your number is %d , %d\n", dd, triple); 

}


