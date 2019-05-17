#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

char firstNotRepeatingCharacter(std::string s) {
//���ڿ� �迭�� ũ�⸸ŭ for���� �����鼭 �߰����� �迭�� ����� �ݺ��Ǿ����� �ʱ�ȭ
// �߰����� �迭 �����ϰ� 0���� �ʱ�ȭ ��Ų��.
    int check[26]; //���ĺ� ������ŭ.
	memset(check, 0, sizeof(check));
	for (int i = 0; i < s.size(); ++i) {
		check[s[i] - 'a']++;
	}

// �ʱ�ȭ�� �迭���� 1���� ���� ���ڵ� �� ���� �� �տ� �ִ� ���� return �ϰ� ���� or return _
	for (int i = 0; i < s.size(); ++i) {
		if (check[s[i]-'a'] == 1) return s[i];
	}
	return '_';
}

int main(void)
{
	string a;
	cin >> a;
	firstNotRepeatingCharacter(a);

	return 0;
}


