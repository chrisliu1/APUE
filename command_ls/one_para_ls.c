#include "ls.h"
//Deal with command 'ls'
void one_para_ls(){
	DIR *dp;
	struct dirent *dirp;
	get_current_dir();
	fprintf(stdout, "current dir: %s\n", dir.dirpath);
	if( (dp = opendir(dir.dirpath)) == NULL)
		fprintf(stderr, "can't open%s\n", dir.dirpath);
	while( ( dirp = readdir(dp)) != NULL){
		if(dirp->d_name[0] =='.')
			continue;
		else{
			fprintf(stdout, "%s  ", dirp->d_name);
		}
	}
	fprintf(stdout, "\n");
	closedir(dp);
}


