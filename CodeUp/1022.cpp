#include <stdio.h>

int main (void)
{
	char a[2001];
	
	scanf("%[^\n]s",a); //\n�� ���͸� ������ ��� ���� �޴´�. 
	printf("%s",a);
	
	return 0;
	
	
}
