#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <utime.h>
#include <fcntl.h>

#define MAXBUF 1024
#define MAX_FILE_LENGTH 20
struct dir
{
	char dirpath[MAXBUF];
}dir;

typedef struct Filestat
{
	char filename[MAX_FILE_LENGTH];
	time_t actime;
	time_t modtime;
	struct Filestat* next;
}fileNode, *FileLink;

//get current directory
void get_current_dir();

//execute "ls"
void one_para_ls();

//execute "ls -a"
void ls_with_a();

//initialize a LinkList
FileLink initList();

//execute "ls -c"
void ls_with_c();
