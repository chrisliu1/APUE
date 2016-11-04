//C file
/* *********************************************************
*
*	Filename: FreeVocabulary.c
*
*	Author: wjliu - wjliu1998@gmail.com
*	Description: Free the structure that store vocabulary
*	Create: 2016-11-04 13:23:46
*       Last Modified: 2016-11-04 13:33:50
* *********************************************************/
#include "vocabulary.h"
#include <stdio.h>
#include <stdlib.h>
void FreeVocabulary(Vocabulary *head){
	Vocabulary p = head;
	if(*head == NULL)
	while(p->next != NULL)
	{
		Vocabulary *q = p->next;
		p->next = p->next->next;
		free(q);
	}
	free(p);
	*head = NULL;
}
