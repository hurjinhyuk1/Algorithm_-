#include <stdio.h>

int n;

int f(int n){
	int cnt=1;
	
	for(int i=2; i<=n; ++i){
		if(n%i==0)cnt++;
	}
	
	return cnt;
}


// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int main()
{
  scanf("%d", &n);
  printf("%d\n", f(n));
}
