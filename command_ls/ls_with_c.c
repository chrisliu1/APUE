#include "ls.h"

void BubbleSort(FileLink head);
void ls_with_c()
{
	struct dirent* dirp;
	DIR *dp;
	struct stat statbuf;
	//get head node
	FileLink head = initList();
	FileLink p;
	FileLink tail = NULL;
	if( (dp = opendir(dir.dirpath)) == NULL)
		fprintf(stderr, "Can't open %s\n", dir.dirpath);

	while( (dirp = readdir(dp)) != NULL){
		if(stat(dirp->d_name, &statbuf) < 0)
			fprintf(stderr, "%s: stat error", dirp->d_name);
		if(dirp->d_name[0] == '.'){
			continue;
		}
		else{
			p = (FileLink)malloc(sizeof(fileNode));
			strcat(p->filename, dirp->d_name);
			p->modtime = statbuf.st_ctime;
			p->next = head->next;
			head->next = p;
		}
	}
	BubbleSort(head);
	p = head->next;
	while(p != NULL){
		fprintf(stdout, "%s   ", p->filename);
		p = p->next;
	}
	fprintf(stdout, "\n");
}

void BubbleSort(FileLink head)
{
	FileLink p, prep, tail, temp;
	while(head->next != tail){
		prep = head;
		p = head->next;
		while(p->next != tail){
			if(p->modtime < p->next->modtime){
				temp = p->next;
				prep->next = p->next;
				p->next = p->next->next;
				prep->next->next = p;
				p = temp;
			}
		p = p->next;
		prep = prep->next;
	}
	tail = p;
	}
}
