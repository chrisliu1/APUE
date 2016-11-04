//h file
/* *********************************************************
*
*	Filename: readfile.h
*
*	Author: wjliu - wjliu1998@gmail.com
*	Description: ---
*	Create: 2016-11-04 14:09:52
*       Last Modified: 2016-11-04 15:03:21
* *********************************************************/

#ifndef _READFILE_H
#define _READFILE_H

#define BUF_LENGTH 256
void PresentFile(char* filename);

typedef struct FileMember{
	char word[BUF_LENGTH];
	struct FileMember* next;
}*FileNode;
#endif
