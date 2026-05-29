#include <stdio.h>

void rotateRight(int arr[], int size, int k)
{

	for(int i = 0; i < k; i++){
	int last = arr[size -1];
		for(int j =size -1; j >0; j--)
		{
		arr[j] = arr[j-1];
		}
	arr[0] = last;
	}

}

void rotateLeft(int arr[], int size, int k)
{

        for(int i = 0; i < k; i++){
        int first = arr[0];
                for(int j =0; j < size; j++)
                {
                arr[j] = arr[j+1];
                }
        arr[size - 1] = first;
        }

}




int main()
{

int numbers[5] = {1,2,3,4,5};

rotateLeft(numbers,5,2);

printf("%d %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);

return 0;
}

