#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void get(char *tem_array,char *s_array)
{
	while(*s_array != '\0')
	{
		if((*s_array >= 'a' && *s_array <= 'z') || (*s_array >= 'A' && *s_array <= 'Z') )
		{
			*tem_array = *s_array;
			tem_array++;
		}
		s_array++;
	}

	*tem_array = '\0';
}

void get(int *tem_array,char *s_array)
{
	char tem[81] = {};
	char *pt = tem;
	int flag = 0;

    while(*s_array != '\0')
    {
            if(*s_array >= '0' && *s_array <= '9')
            {
                    while(*s_array >= '0' && *s_array <= '9')
                    {
                            *pt = *s_array;
                            pt++;
                            s_array++;
                    }

                    *pt = '\0';
                    *tem_array = atoi(tem);
                    pt = tem;
                    tem_array++;
            }else{

                    s_array++;
            }
    }

    *tem_array = -1;

}

inline void my_swap(char *tem_array,char *p)
{
	char tem = '\0';

	tem = *tem_array;
	*tem_array = *p;
	*p = tem;
}

void my_sort(char *tem_array)
{
	char *p = NULL;

	while(*tem_array != '\0')
	{
		p = tem_array;
		while(*p != '\0')
		{
			if(*tem_array > *p)
			{
				my_swap(tem_array,p);
			}
			
			p++;
		}
		
		tem_array++;
	}
}

inline void my_swap(int *tem_array,int *p)
{
	int tem = 0;

	tem = *tem_array;
	*tem_array = *p;
	*p = tem;

}

void my_sort(int *tem_array)
{
	int *p = NULL;

	while(*tem_array != -1)
	{
		p = tem_array;
		while(*p != -1)
		{
			if(*tem_array > *p)
			{
				my_swap(tem_array,p);
			}

			p++;
		}

		tem_array++;
	}
}

void display(char *tem_array)
{
	while(*tem_array != '\0')
	{
		cout << *tem_array << " ";
		tem_array++;
	}
	cout << endl;
}

void display(int *tem_array)
{
	while(*tem_array != -1)
	{
		cout << *tem_array << " ";
		tem_array++;
	}
	cout << endl;

}

void get_sort_display(char *s_array)
{
	char tem_array1[80] = {};
	int tem_array2[80] = {};

	get(tem_array1,s_array);
	get(tem_array2,s_array);
	
	my_sort(tem_array1);
	my_sort(tem_array2);

	display(tem_array1);
	display(tem_array2);
}

int main(int argc ,char *argv[])
{
	char s_array[81] = {};

	cout << "input string(include character and number and not over 80) :" << endl;
	cin >> s_array;
	
	get_sort_display(s_array);
	
	return 0;
}
