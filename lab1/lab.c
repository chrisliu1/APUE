//C file
/* *********************************************************
*
*	Filename: lab.c
*
*	Author: wjliu - wjliu1998@gmail.com
*	Description: ---
*	Create: 2016-11-04 10:31:42
*       Last Modified: 2016-11-04 16:12:44
* *********************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "vocabulary.h"
#include "readfile.h"
#include "matrices.h"
int main(int argc, char *argv){
	Vocabulary head = CreateVocabulary("vocab1");
	Vocabulary p = head->next;

	int NumberOfColumns = NumberOfWords(head);
	int NumberOfRows = argc;

	CreateMatrix(NumberOfRows, NumberOfColumns);
	CreateVector(NumberOfColumns);

	FreeVocabulary(head);
	exit(0);
}
