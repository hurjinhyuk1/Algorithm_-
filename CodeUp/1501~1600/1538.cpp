#include <stdio.h>

int n;

void f(int n){
	if(n%2==0){
		printf("even");
	}
	else if(n%2==1){
		printf("odd");
	}
}

// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
