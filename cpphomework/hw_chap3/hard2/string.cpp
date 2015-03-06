#include "string.h"
using namespace my;

#include <iostream>
using namespace std;

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define MAX 20

namespace my{


String::String()
{
	len = 0;
	str = (char *)malloc(len + 1);
	*str = '\0';
}

String::String(char ch)
{
	len = 1;
	str = (char *)malloc(len + 1);
	memset(str,0,len + 1);
	*str = ch;
}

String::String(const char *ptr)
{
	len = strlen(ptr);
	str = (char *)malloc(len + 1);
	memset(str,0,len + 1);
	strcpy(str,ptr);
}
String::String(int val)
{
	char tem[MAX] = {};
	snprintf(tem,MAX,"%d",val);

	len = strlen(tem);
	str = (char *) malloc(len + 1);
	strcpy(str,tem);
}

String::String(double val)
{
	char tem[MAX] = {};
	snprintf(tem,MAX,"%lf",val);

	len = strlen(tem);
	str = (char *) malloc(len + 1);
	strcpy(str,tem);
}

String::String(bool val)
{
	if(val)
	{
		len = sizeof("true");
		str = (char *) malloc(len);
		memset(str,0,len);
		strcpy(str,"true");
	}else{
		len = sizeof("false");
		str = (char *) malloc(len);
		memset(str,0,len);
		strcpy(str,"false");
	}
}

String::~String()
{
	free(str);
	str = NULL;
}

String::String(const String& tem)
{
	len = strlen(tem.str);
	str = (char *) malloc(len + 1);
	memset(str,0,len+1);
	strcpy(str,tem.str);
}

void String::append(char ch)
{
	len += 1;
	char *tem = (char *)malloc(len + 1);
	memset(tem,0,len+1);
	strncpy(tem,str,len);
	*(tem + len - 1) = ch;
	free(str);
	str = tem;
}

void String::append(const char *ptr)
{
	len += strlen(ptr);
	char *tem = (char *)malloc(len + 1);
	memset(tem,0,len+1);
	strcpy(tem,str);
	strcat(tem,ptr);
	free(str);
	str = tem;
}

/*
void String::append(const char& ch)
{
	len += 1;
	char *tem = (char *)malloc(len + 1);
	memset(tem,0,len+1);
	strncpy(tem,str,len);
	*(tem + len - 1) = ch;
	free(str);
	str = tem;
}
*/

char String::char_at_index(int index)
{
	char ch = '\0';
	ch = *(str + index -1);
	return ch;
}
		
void String::chomp()
{
	*(str + len - 1) = '\0';
	--len;
}

int String::length()
{
	return len ;
}

int String::to_int()
{
	int tem = 0;
	tem = atoi(str);
	return tem;
}

double String::to_double()
{
	double tem = 0.0;
	tem = atof(str);
	return tem;
}

bool String::to_bool()
{
	if(!strcmp(str,"true"))
		return true;
	else
		return false;
}

bool String::compare(const char *ptr)
{
	if(!strcmp(str,ptr))
		return true;
	else
		return false;
}

void String::display() const
{
	cout << str << endl;
	cout << "len = " << len << endl;
}

}






