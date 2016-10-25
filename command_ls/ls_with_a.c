#include "ls.h"
//Deal with command 'ls'
void ls_with_a(){
	DIR *dp;
	struct dirent *dirp;
	get_current_dir();
	fprintf(stdout, "current dir: %s\n", dir.dirpath);
	if( (dp = opendir(dir.dirpath)) == NULL)
		fprintf(stderr, "can't open%s\n", dir.dirpath);
	while( ( dirp = readdir(dp)) != NULL){
		fprintf(stdout, "%s  ", dirp->d_name);
	}
	fprintf(stdout, "\n");
	closedir(dp);
}

