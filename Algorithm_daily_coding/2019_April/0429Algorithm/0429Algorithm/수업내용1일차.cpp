#include <stdio.h>
#pragma warning (disable:4996)

int main(void)
{

	int age;
	char bloodType[3];
	char introduce[20];

	printf("���̸� �Է��ϼ���:");
	scanf("%d", &age);

	printf("�������� �Է��ϼ���:");
	scanf(" %s", bloodType);

	printf("�ڱ�Ұ��ϼ���:");
	
	scanf(" %[^\n]", introduce); //\n(����)�� �����ϰ� ��� ���� �޴´�.

	printf("�� ���̴� %d�Դϴ�.\n", age);
	printf("�� �������� %s�Դϴ�.\n", bloodType);
	printf("%s\n", introduce);


	return 0;
}