#include <stdio.h>

int n;
void f(int n){
	for(int i=1; i<=n; ++i){
		printf("*");
	}
}

// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
