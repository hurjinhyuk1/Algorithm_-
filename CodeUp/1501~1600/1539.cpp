#include <stdio.h>

int n;

void f(int n){
	if(n==0)printf("false");
	else printf("true");
}
// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
