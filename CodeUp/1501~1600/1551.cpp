#include <stdio.h>

int n, d[100010], k;

int f(int a)
{
	int cnt=1;
	for(int i=1; i<=n; ++i){
	
		if(d[i]==a) return i;	
		if(cnt==n)return -1;
		cnt++;
	}
	
}

// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);
  printf("%d\n", f(k));
}

// 1 1 2 2 4
//a==2
