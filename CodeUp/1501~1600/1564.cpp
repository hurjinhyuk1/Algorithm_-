#include <stdio.h>

int a, b;
// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int gcd(int a, int b){
	int result=1;
	if(a>b){
		for(int i=1; i<=b; ++i){
			if(a%i==0 && b%i==0)
			result=i;
		}
	}
	else{
			for(int i=1; i<=a; ++i){
			if(a%i==0 && b%i==0)
			result=i;
	}
}
}
int main()
{
  scanf("%d%d", &a, &b);
  printf("%d\n", gcd(a, b));
}
