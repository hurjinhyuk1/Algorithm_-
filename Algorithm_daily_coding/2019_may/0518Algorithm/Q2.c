#pragma warning(disable:4996)
#include <stdio.h>


void pointChecker(int point)
{
	
	if (point >= 70) printf(" vipȸ���Դϴ�.\n");
	else if (point > 30 &&point<70) printf("  ���ȸ���Դϴ�.\n");
	else printf(" �Ϲ�ȸ���Դϴ�.\n",point);
	
}
int main(void)
{
	char name[20];
	char phoneNumber[20];
	int pointScore;
	printf("�̸�: ");
	scanf("%s",name);
	printf("����ó: ");
	scanf("%s", phoneNumber);
	printf("����Ʈ����(0~100): ");
	scanf("%d", &pointScore);


	printf("%s ������ ����Ʈ ������ %d ������", name, pointScore);
	pointChecker(pointScore);


	return 0;
}