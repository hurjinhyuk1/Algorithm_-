#include <stdio.h>

int n;

void f(int n){
	if(n==2){
	printf("prime");
	return;	
	}
	for(int i=2; i<n; ++i){
		if(n%i==0){
			printf("composite");
			return;
		}
		else if(n-1==i){
		printf("prime");
		return;	
		} 
		
	}
}
// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
