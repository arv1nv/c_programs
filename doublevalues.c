#include <stdio.h>

void doubleValues(int *arr, int size);


int main()
{


int numbers[] = {1,2,3,4,5};


doubleValues(numbers, 5);

for (int i = 0;i < 5;i++){

printf("%d\n", numbers[i]);

}


}


void doubleValues(int *arr, int size)
{

int o = 0;

for(int i = 0; i < size; i++){

	o = *(arr + i);
	*(arr + i) = o * 2;

}

}
