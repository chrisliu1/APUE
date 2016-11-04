//C file
/* *********************************************************
*
*	Filename: PresentFile.c
*
*	Author: wjliu - wjliu1998@gmail.com
*	Description: ---
*	Create: 2016-11-04 14:11:11
*       Last Modified: 2016-11-04 15:29:44
* *********************************************************/
#include "readfile.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void PresentFile(char *filename){
	FILE *fp = fopen(filename, "r");
	char c;
	FileNode head = (FileNode)malloc(sizeof(FileNode));
	int i;
	FileNode p = (FileNode)malloc(sizeof(FileNode));
	while(c = getc(fp)){
		while(c != ' ' && c != EOF){
			i = sizeof(p->word);
			p->word[i] = c;
			c = getc(fp);
			printf("%c", c);
		}
		p->next = head->next;
		head->next = p;
		FileNode p = (FileNode)malloc(sizeof(FileNode));	
	}
	p = head->next;
	while(p != NULL){
		printf("%s ", p->word);
		p = p->next;
	}
}


