//1. ������ �Է��Ͽ� ����, ���, ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//��, ������ ���, ������ �Լ��� ����� ��
#include <stdio.h>
//�Լ� ����
int put1();
int put2();
int put3();
int sum();
double avg(int tot);
char grade(int avg1);

void main()
{

	int a, b, c;
	int tot;
	double avg1;
	char grade1;
	a = put1();
	b = put2();
	c = put3();
	tot = sum(a, b, c);
	avg1 = avg(tot);
	grade1 = grade(avg1);

	printf("������ %d�Դϴ�.\n", tot);
	printf("����� %lf�Դϴ�.\n", avg1);


}

//�Է¹޴� �Լ�(����1)
int put1()
{
	int a;
	printf("1������ ������ �Է��Ͻÿ�.");
	scanf_s("%d", &a);
	return a;
}

//�Է¹޴� �Լ�(����2)
int put2()
{
	int b;
	printf("2������ ������ �Է��Ͻÿ�.");
	scanf_s("%d", &b);
	return b;
}

//�Է¹޴� �Լ�(����3)
int put3()
{
	int c;
	printf("3������ ������ �Է��Ͻÿ�.");
	scanf_s("%d", &c);
	return c;
}

//�������ϴ� �Լ�
int sum(int a, int b, int c)
{
	int tot;
	tot = a + b + c;
	return tot;
}

// ��� ���ϴ� �Լ�
double avg(int tot)
{
	double avg1;
	avg1 = tot / 3;
	return avg1;
}

//���� ���ϴ� �Լ�
char grade(int avg1)
{
	switch (avg1 / 10)
	{
	case 10:
	case 9:
		printf("������ Grade A�Դϴ�\n");
		break;
	case 8:
		printf("������ Grade B�Դϴ�\n");
		break;
	case 7:
		printf("������ Grade C�Դϴ�\n");
		break;
	case 6:
		printf("������ Grade D�Դϴ�\n");
		break;
	default:
		printf("������ Grade F�Դϴ�\n");
	}
}