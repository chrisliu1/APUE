//C file
/* *********************************************************
*
*	Filename: ls_with_l.c
*
*	Author: wjliu - wjliu1998@gmail.com
*	Description: execute command "ls -l"
*	Create: 2016-10-28 09:33:34
*	Last Modified: 2016-10-28 09:33:34
* *********************************************************/
#include "ls.h"

void ls_with_l(){
	struct dirent* dirp;
	DIR* dp;
	struct stat buf;
	char time[64];
	if((dp = opendir(dir.dirpath)) == NULL)
		fprintf(stderr, "can't open %s", dir.dirpath);
	while((dirp = readdir(dp)) != NULL){
		if(stat(dirp->d_name, &buf) < 0){
			fprintf(stderr, "stat error");
			continue;
		}
		//The type of file
		if	(S_ISREG(buf.st_mode))   printf("-");
		else if	(S_ISDIR(buf.st_mode))   printf("d");
		else if	(S_ISCHR(buf.st_mode))   printf("c");
		else if (S_ISBLK(buf.st_mode))   printf("b");
		else if (S_ISFIFO(buf.st_mode))  printf("p");
		else if (S_ISLNK(buf.st_mode))   printf("l");
		else if (S_ISSOCK(buf.st_mode))  printf("s");
		else 				 printf("?");
		//File access permissions
		(buf.st_mode&S_IRUSR) ? printf("r"): printf("-");
		(buf.st_mode&S_IWUSR) ? printf("w"): printf("-");
		(buf.st_mode&S_IXUSR) ? printf("x"): printf("-");
		(buf.st_mode&S_IRGRP) ? printf("r"): printf("-");
		(buf.st_mode&S_IWGRP) ? printf("w"): printf("-");
		(buf.st_mode&S_IXGRP) ? printf("x"): printf("-");
		(buf.st_mode&S_IROTH) ? printf("r"): printf("-");
		(buf.st_mode&S_IWOTH) ? printf("w"): printf("-");
		(buf.st_mode&S_IXOTH) ? printf("x"): printf("-");
		
		printf("\t");
		
		//number of links
		printf("%d\t", buf.st_nlink);
		//user ID of owner
		printf("%d\t", buf.st_uid);
		//group ID of owner
		printf("%d\t", buf.st_gid);
		//size in bytes
		printf("%d\t", buf.st_size);
		//time of last access
		strftime(time, sizeof(time), "%Y-%m-%d %H:%M", localtime(&buf.st_mtime));
		printf("%s\t", time);
		//the name of file
		printf("%s", dirp->d_name);
		printf("\n");

	}
}
		
	 	
