#include <stdio.h>

int main(void)
{
	int a = 10;
	int *ptr = &a;
	
	*ptr = 20;
	
	printf("a = %d\n",a);
	
	return 0;
	

}
