#include <stdio.h>
// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
void myswap(int *a,int*b){
	if(*a>*b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
		
	}
	
}
main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    myswap(&a, &b);
    printf("%d %d", a, b);
}
