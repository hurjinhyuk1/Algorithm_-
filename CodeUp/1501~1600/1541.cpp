#include <stdio.h>

int n;

void f(int n){
	if(n<0){
		printf("negative");
	}
	else if(n==0){
		printf("zero");
	}
	else {
		printf("positive");
	}
}
// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
