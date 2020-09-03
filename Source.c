#include<stdio.h>
#include "resource.h"

int main()
{
	int x = 420;
	modify_data(&x);
	printf("%d\n", x);
	struct listnode node;
	node.name = "someone";
	printf("Name within node with alignment: %s", node.name);
	return printf("%lu", find_sum_n(2000000));
}