#include <stdio.h>

int n, m;
// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int max(int n,int m)
{
	return m>=n? m:n;
}
int main()
{
  scanf("%d%d", &n, &m);
  printf("%d\n", max(n, m));
}
