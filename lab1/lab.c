//C file
/* *********************************************************
*
*	Filename: lab.c
*
*	Author: wjliu - wjliu1998@gmail.com
*	Description: ---
*	Create: 2016-11-04 10:31:42
*       Last Modified: 2016-11-04 13:32:10
* *********************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "vocabulary.h"
int main(int argc, char *argv){
	Vocabulary head = CreateVocabulary("vocab1");
	Vocabulary p = head->next;
	while(p != NULL)
	{
		printf("%s", p->word);
		p = p->next;
	}
	FreeVocabulary(head);
	exit(0);
}
