
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main(void)
{
	char *result;
	int count = 0;
	char str[1000001];

	cin.getline(str, 1000001, '\n'); //��� ���� ���� �Է¹���
	result = strtok(str, " ,");
	while (result != NULL) {
		count++;
		result = strtok(NULL, " ,"); //null�� �־��ָ� ���� ������ �ּҸ� ��ȯ ����.
	}
	printf("%d", count);
	return 0;
}
//���ڿ� �ڸ��� strok ����.
