#include <stdio.h>

long long int n;

int sqrt(long long int n)
{
	
	return n/(n/2);
}
// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int main()
{
  scanf("%lld", &n);
  printf("%d\n", sqrt(n));
  return 0;
}
