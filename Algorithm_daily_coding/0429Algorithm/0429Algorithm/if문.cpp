#include <stdio.h>
#pragma warning (disable: 4996)

int main(void)
{
	int password;
	int input_password;
	int count = 0;
	printf("��й�ȣ�� �����ϼ���:");
	scanf("%d", &password);

	do {
		printf("��й�ȣ�� �Է��ϼ���(%d)", count+1);
		scanf("%d", &input_password);
		if (password == input_password) {
			printf("��й�ȣ�� �½��ϴ�.\n");
			break;
		}
		else {
			printf("��й�ȣ�� Ʋ�Ƚ��ϴ�.\n");
			count++;
			if (count == 3) {
				printf("��й�ȣ�� �ʱ�ȭ�մϴ�.\n");
				password = 1247;
			}

		}
	} while (count < 3);
	return 0;
}