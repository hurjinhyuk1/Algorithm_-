#include <stdio.h>

int n;

char grade(int n)
{
	switch(n/10){
		case 10:
		case 9:
			return 'A';
			break;
		case 8:
			return 'B';
			break;
		case 7:
			return 'C';
			break;
		case 6:
			return 'D';
			break;
		
		default:
		return 'F';		
				
	}
}

// �� �κп� ���� �� �ڵ带 �ۼ��Ͽ� ����
int main()
{
  scanf("%d", &n);
  printf("%c", grade(n));
  return 0;
}
