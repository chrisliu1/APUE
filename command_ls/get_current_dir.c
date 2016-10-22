#include "ls.h"

void get_current_dir()
{
	if(getcwd(dir.dirpath,MAXBUF) == NULL)
		perror("getcwd failed");
}
