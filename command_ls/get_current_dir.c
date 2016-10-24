#include "ls.h"
//get the name of current directory
void get_current_dir()
{
	if(getcwd(dir.dirpath,MAXBUF) == NULL)
		perror("getcwd failed");
}
