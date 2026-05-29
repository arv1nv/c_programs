#include <stdio.h>


void rmdups(int *arr, int size)
{
 int newsize = 0;
 int newarr[100];

	for(int i = 0;i < size;i++){
	int dup = 0;
		for(int j = 1; j < size;j++){
		if (arr[i] == newarr[j]){
			dup = 1;
		}
		}
	if (!dup) {

	newarr[newsize] = arr[i];
	newsize++;
	}

	}

	for(int i = 0; i < newsize; i++){
	printf("%d\n", newarr[i]);
	}

}




int main()
{


	int array[5] = {1, 1, 1, 2, 3};


	rmdups(array, 5);






	return 0;
}
