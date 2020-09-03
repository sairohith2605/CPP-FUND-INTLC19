#include "resource.h"

unsigned long _fastcall find_sum_n(long n)
{
	long sum = 0;
	for (long i = 0; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}

void modify_data(int *data)
{
	*data = 24;
}