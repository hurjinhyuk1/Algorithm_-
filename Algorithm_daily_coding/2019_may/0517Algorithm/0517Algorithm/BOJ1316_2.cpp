#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main(void)
{

	int N;
	cin >> N;
	int cnt = 0;
	while (N--) {
		
		string s;
		cin >> s;
		int size = s.size();
		vector<int>checkwords(26, false);
		bool groupWord = true;
		for (int i = 0; i < size; ++i) {
			
			if (checkwords[s[i] - 'a'] == false) {
				checkwords[s[i] - 'a'] = true;
			}
			else if (s[i] != s[i - 1]) {
				groupWord = false;
				break;
			}
		}
		if (groupWord)cnt++;
	}

	//�ܾ� ȸ���� �Է�
	// for�� �ȿ��� �ܾ ���� üũ�� �� ��
	// �׷� �ܾ��� ������ ���
	// �Ǽ��� ������ ^_^

	cout << cnt << endl;
	return 0;
}