#include <stdio.h>

double x;

double f(double x){
	long long int a=x;
	return x-a;
}



// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int main()
{
  scanf("%lf", &x);
  printf("%.14lf\n", f(x));
}
