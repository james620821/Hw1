#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b, c, d, e,f,n1,n2;
	printf("�@��Ѫ����{��: ");
	scanf("%f",&a);
	printf("�T�o�@���ɦh�ֿ�: ");
	scanf("%f",&b);
	printf("�����@���ɯ��p�h�֤���: ");
	scanf("%f",&c);
	printf("�@�Ѫ������O: ");
	scanf("%f", &d);
	printf("�@�Ѫ��q��O(�L���O): ");
	scanf("%f",&e);
	n1 = a / c*b + d + e;
	n2 = (a / c*b + d + e)/4;
	f = n1 - n2;
	printf("�C�Ѷ}���O��: %f\n", n1);
	printf("�@���O��: %f\n", n2);
	printf("�A�٤F: %f\n",f);

	system("pause");
	return 0;
}