#pragma warning(disable 4996)
#include <stdio.h>

int d[100];

int dp(int x)
{
	if (x == 1)return 1;
	if (x == 2)return 1;
	//����Լ��� ���� ����.
	if (d[x] != 0) {
		//�迭 D �ȿ� 0�̿��� ���� ������ �ִ°� ��.
		return d[x];
	}
	//���� �� ���� ���� �����. 
	return d[x] = dp(x - 1) + dp(x - 2); 

}

int main(void)
{


	printf("%d", dp(49));
	return 0;
}

//�̷������� �ϰ� �Ǹ� dp(50)�� ���� �ϸ� 1�� ������ �� ���� 2�辿 �����Ѵ�.
// ���� 50�� 2^50�� �ǹǷ�... �̴� ��û�� �ð��� �ʷ���.