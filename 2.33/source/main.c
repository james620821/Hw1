#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b, c, d, e,f,n1,n2;
	printf("一整天的里程數: ");
	scanf("%f",&a);
	printf("汽油一公升多少錢: ");
	scanf("%f",&b);
	printf("平均一公升能行駛多少公里: ");
	scanf("%f",&c);
	printf("一天的停車費: ");
	scanf("%f", &d);
	printf("一天的通行費(過路費): ");
	scanf("%f",&e);
	n1 = a / c*b + d + e;
	n2 = (a / c*b + d + e)/4;
	f = n1 - n2;
	printf("每天開車費用: %f\n", n1);
	printf("共乘費用: %f\n", n2);
	printf("你省了: %f\n",f);

	system("pause");
	return 0;
}