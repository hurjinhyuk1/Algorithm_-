#include <cstdio>
#include <string>
#include <iostream>


using namespace std;

int main(void)
{
	int check[26];
	
	memset(check,0,sizeof(check));
	//memset(�����ּ�,�ٲ� ��, ũ�� �޸������� ���� ������� ex) int���� 4����Ʈ �̹Ƿ�, �Ź� 4����Ʈ ���̳��� �����������)
	string str = "abacabad";

	for (int i = 0; i < str.size(); ++i) {
		check[str[i] - 'a']++;
	}
	//check �迭 �ϼ�
	//c[4,2,1,1]
	for (int i = 0; i < str.size(); i++) {
		if (check[str[i]-'a']==1) return str[i];
	}
	

		return '_';
}