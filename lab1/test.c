//C file
/* *********************************************************
*
*	Filename: test.c
*
*	Author: wjliu - wjliu1998@gmail.com
*	Description: ---
*	Create: 2016-11-04 09:42:11
*       Last Modified: 2016-11-04 15:50:48
* *********************************************************/
#include <stdio.h>
#include <stdlib.h>

void main(){
	int ***matrix1;
	int i, j, m;
	matrix1 = (int ***)malloc(3 * sizeof(int));
	for(i = 0; i < 3; i++)
	{
		matrix1[i] = (int **)malloc(3 * sizeof(int));
		for(j = 0; j < 3; j++)
		{
			matrix1[i][j] = (int *)malloc(3 * sizeof(int));
	}
	}
	for(i = 0; i < 3; i++)
	{
		for(j = 0;j < 3; j++)
		{
			for(m = 0;m < 3; m++)
			{
				matrix1[i][j][m] = i*j*m;
				printf("%d ",matrix1[i][j][m]);
		}
	}
	}
}
