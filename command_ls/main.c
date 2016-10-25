#include "ls.h"

int main(int argc, char* argv[]){
	
	DIR *dp;
	struct dirent *dirp;
//Execuate ls without operands
	if(argc == 1)
	{
		one_para_ls();
	}
	else if(argc == 2)
	{
		if(strcmp(argv[1], "-a") == 0)
		{
			ls_with_a();
		}
	}
}

