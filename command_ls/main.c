#include "ls.h"

int main(int argc, char* argv[]){
	
	DIR *dp;
	struct dirent *dirp;
//Execuate ls without operands
	if(argc == 1)
	{
		one_para_ls();
	}
}

