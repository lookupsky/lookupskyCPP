#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "getfilename.h"

int main(int argc , char *argv[])
{
	char *p = NULL;
	int len = 0;

	len = strlen(argv[1]) + 1;

	char *pathname1 = (char *)malloc(len);
	memset(pathname1,0,len);
	char *pathname2 = (char *)malloc(len);
	memset(pathname2,0,len);

	strcpy(pathname1,argv[1]);
	strcpy(pathname2,argv[1]);

	p = get_file_name(pathname1);
	printf("file name : %s\n",p);

	p = get_file_extension(pathname2);
	printf("file extension : %s\n",p);
	
	free(pathname1);
	free(pathname2);

	pathname1 = NULL;
	pathname2 = NULL;

	return 0;
}
