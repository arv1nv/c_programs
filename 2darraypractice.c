#include <stdio.h>

void fillMatrix(int mat[3][3])
{
int num = 1;

	for(int i =0;i < 3;i++)
	{
		for(int j = 0;j < 3;j++)
		{
		//mat[i][j] = num;
		*(*(mat + i) + j) = num;
		num++;
		}
	}

}



int main()
{

int array[3][3];

fillMatrix(array);

for(int i =0;i < 3;i++)
        {
                for(int j = 0;j < 3;j++)
                {
                printf("%d", array[i][j]);
                }
		printf("\n");
        }



return 0;

}
