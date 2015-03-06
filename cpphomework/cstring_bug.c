/**
 * Shanghai IOTEK
 * An example to demonstrate how to debug c code.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct CSTRING{
	char *str;
	int len;
}CString;

CString *Init_CString(char *str)
{
    CString *p = malloc(sizeof(CString));
    p->str = malloc(strlen(str) + 1);
    strncpy(p->str,str,strlen(str)+1);	
	p->len = strlen(str);
  
	return p;
}

void Delete_CString(CString *p)
{
	free(p->str);
	free(p);
}

//Removes the last character of a CString and returns it.
char Chomp(CString *cstring)
{
	char lastchar = *((cstring->str) + (cstring->len) - 1);
	//Shorten the string by one
	*((cstring->str) + (cstring->len) - 1) = '\0';
	cstring->len = strlen(cstring->str);
	return lastchar;
}

//Appends a char * to a CString
CString* Append_Chars_To_CString(CString *p, char *str){
	p->len = p->len + strlen(str);
	char *newstr = malloc(p->len + 1);

	//Create the new string to replace p->str
	snprintf(newstr,p->len + 1,"%s%s",p->str,str);
	//Free old string and make CString point to the new string
	free(p->str);
	p->str = newstr;

	return p;
}

int main(void)
{
	CString *mystr = NULL;
	char c = '\0';
	
	mystr = Init_CString("Hello!");
	printf("Init:\n	str: '%s'	len: %d\n",mystr->str,mystr->len);
	c = Chomp(mystr);
	printf("Chomp '%c':\n str:'%s' len:%d\n",c,mystr->str,mystr->len);
	mystr = Append_Chars_To_CString(mystr," world!");
	printf("Append:\n str:'%s' len:%d\n",mystr->str,mystr->len);

	Delete_CString(mystr);
    mystr = NULL;

	return 0;
}
