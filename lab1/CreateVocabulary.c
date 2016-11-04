//C file
/* *********************************************************
*
*	Filename: CreateVocabulary.c
*
*	Author: wjliu - wjliu1998@gmail.com
*	Description: Open a file by filename and create a structure with the words in the file
*	Create: 2016-11-04 10:13:34
*       Last Modified: 2016-11-04 16:04:53
* *********************************************************/
#include "vocabulary.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
Vocabulary *CreateVocabulary(char *filename){
	FILE *fd = fopen(filename, "r");
	char buf[BUF_LENGTH];
	Vocabulary head = (Vocabulary)malloc( sizeof(Node));
	Vocabulary p;
	head->next = NULL;
	//Read from file and store
	while(fgets(buf, BUF_LENGTH, fd) != NULL){
		p = (Vocabulary)malloc(sizeof(Node));
		strcpy(p->word, buf);
		p->next = head->next;
		head->next = p;
	}
	fclose(fd);
	return head;
}

int NumberOfWords(Vocabulary head){
	Vocabulary p = head->next;
	int i;
	while(p != NULL){
		i++;
		p = p->next;
	}
	return i;
}
		
		
		
	
	
