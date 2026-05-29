#include <stdio.h>

int main(){

printf("How many n's do you want? ");

int n;

scanf("%d", &n);

int i = 0;

for (i = 0; i < n; i++) {

printf("Enter two float numbers separated by ##: ");

float f1, f2;

scanf("%f##%f", &f1, &f2);

printf("%.3f + %.3f = %.2f\n", f1, f2, f1 + f2); 

}












}
