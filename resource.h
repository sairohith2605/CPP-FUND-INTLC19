#pragma once
#ifndef SOURCE_HEADER_H
#define RESOURCE_HEADER_H

_declspec(align(2)) struct listnode
{
	int x;
	double y;
	const char* name;
};

int print_data(const char* data);
unsigned long _fastcall find_sum_n(long n);
void modify_data(int *data);

#endif // !RESOURCE_HEADER_H

