#include <stdio.h>

int n, m;
// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
long long int f (long long int a, long long int b){
	return a+b;
}
int main()
{
  scanf("%d%d", &n, &m);
  printf("%lld\n", f(n, m));
}
