#include <stdio.h>
// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int mymax(int a,int b){
	if(a>b)return a;
	else return b;
}
main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", mymax(a, b));
}
