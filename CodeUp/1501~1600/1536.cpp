#include <stdio.h>

int n;

long long int d[110];

// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
 long long int f(){
	long long int min=2100000000;
	for(int i=1; i<=n; ++i){
		if(min>d[i]){
			min=d[i];
		}
	}
	return min;
}
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%lld", &d[i]);

  printf("%lld", f());
  return 0;
}
