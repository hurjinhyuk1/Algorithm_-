#pragma warning(disable 4996)
#include <stdio.h>


int N;
int A, B;
int count;
int main(void)
{
	
	//A�� 5�� �������� ���� ��
	//B�� 3���� �������� ���� ��.
	scanf("%d", &N);

	while (N > 0) {
		//N�� 5�� ����� ��� �ٷ� ������ ������ �� ���.
		//N�� 5�� ����� �ƴ� ���, 3�� ���鼭 ���� �ϳ��� ����.
		//5�� 3���ε� ���������� �ʴ� ���� ��� -1�� ����ϸ鼭 ���α׷� ����.

		if (N % 5 == 0) {
			A = N / 5;
			break;
		}
		N -= 3; // 3�� ���ش�.
		B++;
		if (N < 0) {
			B= -1;
			break;
		}
	}


	printf("%d\n", A+B);

	return 0;
}