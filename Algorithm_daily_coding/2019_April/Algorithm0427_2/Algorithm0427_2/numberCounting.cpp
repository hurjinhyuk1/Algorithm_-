#pragma warning(disable:4996)

#include <iostream>
#include <cstdio>

using namespace std;


int main(void)
{
	int count;
	int number[100];
	int sum = 0;
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		scanf("%d",&number[i]);
// scanf�� �Է� ���� ���� �ϳ��� �и��ؼ� ���ؾ���.
		sum += number[i];
	}
	printf("%d\n", sum);



	return 0;
}