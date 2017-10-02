#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n1,z;
	printf("write a ingeter: ");
	scanf("%d",&n1);
	z = n1 % 2;
	if (z == 0)
	{
		printf("this is a even\n");
	}
	if (z == 1)
	{
		printf("this is a odd\n");
	}

	system("pause");
	return 0;
}
