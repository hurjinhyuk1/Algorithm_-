#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	string words;
	
	int N;
	int cnt = 0;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> words;
		bool groupVoca = true;
		vector<int> checkWord(26, false);
		for (int j = 0; j < words.size(); j++) {
		
		if (checkWord[words[j] - 'a'] == false) {
			checkWord[words[j] - 'a']=true;
			
		}
		else if (words[j]!=words[j-1]) {
			groupVoca = false;
			break;
		}
		

	}
	if (groupVoca)cnt++;
		
	}
	cout << cnt << endl;

	//�׷� üũ�� ���� ���� 26���� -1�� �ʱ�ȭ ��Ŵ.
	// �ܾ � ���� ������ �Է�
	//for���� ���� �ܾ �Է� ����
	// ������ ���ÿ� �׷�ܾ����� üũ�Ѵ�.



	return 0;
}