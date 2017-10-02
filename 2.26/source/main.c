#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n1, n2, z;
	printf("write two integer: ");
	scanf("%d%d",&n1,&n2);
	z = n1 % n2;
	if (z == 0)
	{
		printf("%d is a multiple of %d\n",n1,n2);
	}
	if (z != 0)
	{
		printf("%d isn't a multiple of %d\n", n1, n2);
	}
	system("pause");
	return 0;
}