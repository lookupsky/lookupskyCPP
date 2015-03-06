#include "getfilename.h"


char * get_file_name(char *pathname)
{
	char *p = pathname;

	while(*p != '\0')
		p++;

	while(*p != '.')
		p--;

	*p = '\0';

	while(*p != '/')
		p--;
	
	return ++p;
}
char * get_file_extension(char *pathname)
{

	char *p = pathname;

	while(*p != '\0')
		p++;

	while(*p != '.')
		p--;

	return ++p;
}
