#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


#define MAXBUF 1024

struct dir
{
	char dirpath[MAXBUF];
}dir;

void get_current_dir();
void one_para_ls();

