#include <stdio.h>

double x;

long long f(double x){
	
	long long int t=(long long int)x;


	if(t<x){
	return x+1;

	}
	else{
	return x;		
	}
	
}


// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int main()
{
  scanf("%lf", &x);
  printf("%lld\n", f(x));
}
