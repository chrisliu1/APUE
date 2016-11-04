//C file
/* *********************************************************
*
*	Filename: CreateMatrices.c
*
*	Author: wjliu - wjliu1998@gmail.com
*	Description: ---
*	Create: 2016-11-04 15:40:02
*       Last Modified: 2016-11-04 15:52:30
* *********************************************************/
#include "matrices.h"
#include <stdlib.h>
#include <stdio.h>
Matrix CreateMatrix(int rows, int columns){
	Matrix Matrix;
	int i,j;
	Matrix = (float **)malloc(rows * sizeof(Matrix));
	for(i = 0; i < rows; i++){
		Matrix[i] = (float *)malloc(columns * sizeof(Matrix));
		for(j = 0; j < columns; j++)
		{
			Matrix[i][j] = 0;
			printf("%f ", Matrix[i][j]);
		}
	}
	return Matrix;
}

Vector CreateVector(int numbers){
	Vector Vector;
	int i = 0;
	Vector = (float *)malloc(numbers * sizeof(Vector));
	for(i = 0; i < numbers; i++){
		Vector[i] = 0;
	}
	return Vector;
}
