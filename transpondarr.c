#include <stdio.h>
#include <string.h>
#define SIZE 3

void transpose(int a[SIZE][SIZE])
{



	for(int i = 0;i < SIZE; i++){
		for(int j = i + 1; j < SIZE; j++){
		int temp = a[i][j];
		a[i][j] = a[j][i];
		a[j][i] = temp;
		}

	}





}




int main(){

int a[SIZE][SIZE] = {{1,2,3},{4,5,6},{7,8,9}};

transpose(a);

for(int i = 0;i < SIZE; i++){
                for(int j = 0; j < SIZE; j++){
                printf("%d",a[i][j]); 
                }
	printf("\n");
        }






}
