#include <stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d.%d.%d",&a,&b,&c);
	printf("%04d.%02d.%02d\n",a,b,c);
	//��%d�ȿ� 01 02�� ���� �־��ָ� ���ڸ� ���ڸ����� ��µ�
	// 01 -> 01  02 -> 001 
	return 0;
}
