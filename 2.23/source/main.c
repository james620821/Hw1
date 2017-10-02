#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n1, n2, n3;

	printf("write three numbers: ");
	scanf("%d%d%d",&n1,&n2,&n3);

	if (n1 >= n2 & n1 >= n3)
	{
		printf("largest: %d\n", n1);
	}
	else if (n2 >= n1 & n2 >= n3)
	{
		printf("largest: %d\n", n2);
	}
	else if (n3>= n1 & n3 >= n2)
	{
		printf("largest: %d\n", n3);
	}
	if (n1 <= n2 & n1 <= n3)
	{
		printf("smallest: %d\n", n1);
	}
	else if (n2 <= n1 & n2 <= n3)
	{
		printf("smallest: %d\n", n2);
	}
	else if (n3 <= n2 & n3 <= n1)
	{
		printf("smallest: %d\n", n3);
	}
	system("pause");
	return 0;
}
