#pragma warning(disable 4996)
#include <iostream>
#include <string>

using namespace std;
char* ltrim(char *s) {
	char* begin;
	begin = s;

	while (*begin != '\0') {
		if (isspace(*begin))
			begin++;
		else {
			s = begin;
			break;
		}
	}

	return s;
}

int main() {
	//char ab = '\0';
	char a[100];
	int count = 0;
	cin.getline(a, 100, '\n');
	printf("%d\n", strlen(a));
	printf("%c\n",a[strlen(a)]);
	//a[strlen(a) + 1] = '\0'1;
	printf("%s\n", a);
	//ltrim(a);

	//printf("%s", ltrim(a));
	
	// �� ���� ����.
	//['hello world']
	
	for (int i = 0; i < strlen(a); ++i) {
		if (a[i] == ' '||a[i]=='\0') {
			count++;
		}
	}
	//printf("%d", strlen(a));
	//printf("%d\n", count);

	return 0;
}

//putchar�� ���� �ϳ��� ����Ѵ�.
// getchar�� �Է� ���ۿ��� ���Ͱ� ���� ������ ��� ������
// ���Ͱ� ������ �Է� ����.