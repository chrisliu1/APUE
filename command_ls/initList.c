#include "ls.h"

FileLink initList()
{
	FileLink head = (FileLink)malloc(sizeof(fileNode));
	strcat(head->filename, "head");
	head->actime = NULL;
	head->modtime = NULL;
	head->next = NULL;
	return head;
}
