#include <stdio.h>

double x;

long long int f(double x){
	long long int t=(long long int)x;
	if(t<x){
		return t;
	}
	else if(t==x){
		return t;
	}
	else{
		return t-1;
	}
}

// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int main()
{
  scanf("%lf", &x);
  printf("%lld\n", f(x));
}
