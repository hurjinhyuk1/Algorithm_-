#pragma warning(disable 4996)
#include <iostream>
#include <string>

using namespace std;

int main() {
	char a;
	
	a = getchar();
	while (a != -1) {
		
		putchar(a);
		a = getchar();
	}

	return 0;
}

//putchar�� ���� �ϳ��� ����Ѵ�.
// getchar�� �Է� ���ۿ��� ���Ͱ� ���� ������ ��� ������
// ���Ͱ� ������ �Է� ����.