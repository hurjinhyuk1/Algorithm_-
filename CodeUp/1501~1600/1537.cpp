#include <stdio.h>

int n;

void f(int n){
	if(n==1){
		printf("hello");
	}
	else if(n==2){
		printf("world");
	}
}

// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
