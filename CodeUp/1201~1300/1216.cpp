#include <cstdio>

int main (void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	//a:ȫ���� ���� ���� ��� ����
	// b: ȫ���� �� ����� ����
	// c: ȫ����� 
	
	if(a<b-c)printf("advertise");
	else if(a>b-c)printf("do not advertise");
	else printf("does not matter");
	
	
	return 0;
}
