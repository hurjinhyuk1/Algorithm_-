#include <iostream>
#include <vector>
#include <string>
#include <cstdio>

using namespace std;


int main(void)
{
	//���ĺ� ������ŭ�� char�� vector 26�� ����, -1�� �ʱ�ȭ.
	// string�� �Է� �޴´�.
	// ���� string�� for���� ���鼭 ù��° ������ ���ĺ� �� 'a'�� ���༭ �ڸ��� ����
	vector<char> alpa(26, -1);
	int location = -1;
	string word;
	cin >> word;
	for (int i = 0; i < word.size(); ++i) {
		location++;
		if (alpa[word[i] - 'a'] != -1)continue;
		alpa[word[i] - 'a'] = location;
	}

	for (int i = 0; i < alpa.size(); i++) {
		cout << alpa[i] << " ";
	}
	cout << endl;


}