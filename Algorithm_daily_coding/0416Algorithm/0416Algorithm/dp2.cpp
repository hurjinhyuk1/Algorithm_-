#include <stdio.h>


int a[10]; // ����� �Ϸ�� ���� �迭�� �����ϰ� �ʿ��� �� ����.

int dp(int x)
{
	if (x == 1) return 1;
	if (x == 2) return 1;
	if (a[x - 1] != 0) {
		return a[x - 1];
	}
	return a[x - 1] = dp(x - 1) + dp(x - 2);

}


int main(void)


{
	printf("%d\n", dp(10));


	return 0;
}