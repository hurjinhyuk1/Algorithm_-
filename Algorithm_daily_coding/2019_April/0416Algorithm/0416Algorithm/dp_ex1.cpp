#include <stdio.h>
#pragma warnind(disable 4996)
//���̳��� ���α׷���
//��ȭ���� �����.
//BOJ11726
//��Ģ������ ��ȭ���� .

int a[1001];
int N;
int dp(int x) {
	if (x == 1)return 1;
	if (x == 2) return 2;
	if (a[x] != 0) return a[x];

	return (a[x] = dp(x - 1) + dp(x - 2))%10007;
}


int main(void)
{

	scanf("%d", &N);
	printf("%d", dp(N));

	return 0;

}