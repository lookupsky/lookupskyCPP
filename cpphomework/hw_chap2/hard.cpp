#include <iostream>
using namespace std;

template <typename T>
void my_sort(T *pt,int len)
{
	int i = 0;
	int j = 0;
	T tem = 0;
	
	for(;i<len-1;i++)
	{
		for(j=i+1;j<len;j++)
		{
		if(*(pt+i) > *(pt+j))
		{
			tem = *(pt+i);
			*(pt+i) = *(pt+j);
			*(pt+j) = tem;
		}
		}
	}
	
}

template <typename Q>
void my_printf(Q *pt,int len)
{
	int i = 0;

	for(;i<len;i++)
	{
		cout << *(pt+i) << " ";
	}

	cout << endl;

}

int main()
{
	int int_array[7] = {2,8,7,6,25,47,92};
	double double_array[6] = {2.2,5.3,6.4,1.2,0.6,9.7};

	my_printf(int_array,7);
	my_printf(double_array,6);

	my_sort(int_array,7);
	my_sort(double_array,6);

	my_printf(int_array,7);
	my_printf(double_array,6);

	return 0;
}



