#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float n1, n2,a;
	printf("write your weight(kg): ");
	scanf("%f",&n1);
	printf("write your height(m): ");
	scanf("%f", &n2);
	
	a = n1 / n2 / n2;

	printf("BMI: %f\n",a);
	
	if (a < 18.5 )
	{
		printf("Underweight\n");
	}
	if (18.5 <= a & a<= 24.9 )
	{
		printf("Normal\n");
	}
	if (25 <= a & a<= 29.9)
	{
		printf("Overweight\n");
	}
	if (a >= 30)
	{
		printf("Obese\n");
	}
	system("pause");
	return 0;
}
