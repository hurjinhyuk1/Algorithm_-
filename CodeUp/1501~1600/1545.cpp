#include <stdio.h>

int n;

bool zero (int n)
{
	if(n==0)return true;
	else return false;
}


// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int main()
{
  scanf("%d", &n);
  if(zero(n)) printf("zero");
  else printf("non zero");
  return 0;
}
