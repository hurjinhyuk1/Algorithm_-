#include <stdio.h>
// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
float circle(float r){
	return 3.14*r*r;
}
main()
{
    int r;
    scanf("%d", &r);
    printf("%.2f", circle(r));
}
