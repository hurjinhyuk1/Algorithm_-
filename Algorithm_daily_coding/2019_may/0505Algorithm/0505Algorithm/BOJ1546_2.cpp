#include <iostream>


using namespace std;

int main(void)


{
	int N;
	int num; // ���� �Է� ���� ����
	int max_num = -1;
	double avg_num = 0;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> num;
		if (max_num < num)max_num = num;
		avg_num += num;
	}
	// avg_num���� ��� ���� ��
	// max_num���� �ִ�� ū ��.
	cout.precision(6);
	cout << fixed;
	cout << (avg_num / N) / max_num * 100 << endl;


	return 0;
}