//h file
/* *********************************************************
*
*	Filename: matrices.h
*
*	Author: wjliu - wjliu1998@gmail.com
*	Description: ---
*	Create: 2016-11-04 15:35:00
*       Last Modified: 2016-11-04 15:46:49
* *********************************************************/

#ifndef _MATRICES_H
#define _MATRICES_H

//Create a structure to store the number of rows and columns
typedef float **Matrix;
typedef float *Vector;

//Initialize to 0
Matrix CreateMatrix(int rows, int columns);
Vector CreateVector(int numbers);

void FreeMatrix(Matrix, int rows, int columns);
void FreeVector(Vector, int numbers);

#endif
