#pragma warning(disable: 4996)


#include <stdio.h>
int count, Month, days;
int enddays[] = {31,28,31,30,31,30,31,31,30,31,30,31};
int main(void)
{


	scanf("%d %d", &Month, &days);

	//������� ���� 3������ �Է��ϸ� 1,2������ ���ϸ� ��.
	for (int i = 1; i < Month; ++i) {
		count += enddays[i-1];
	}
	count += days;

	switch (count % 7) {
	case 1:
		printf("MON\n");
		break;
	case 2:
		printf("TUE\n");
		break;

	case 3:
		printf("WED\n");
		break;

	case 4:
		printf("THU\n");
		break;

	case 5:
		printf("FRI\n");
		break;

	case 6:
		printf("SAT\n");
		break;

	case 0:
		printf("SUN");
		break;


	}

	return 0;
}