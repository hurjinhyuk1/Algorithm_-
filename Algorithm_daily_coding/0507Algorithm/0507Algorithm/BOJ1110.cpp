#include <iostream>


using namespace std;

int main(void)
{
	int N;
	cin >> N;
	int start_num = N; // ó�� ���� �����ϱ� ����.
	int count = 0;
	while (true) {
		count++;
		int m1 = N % 10; //1�� �ڸ�
		int m10 = N / 10; //10�� �ڸ�
		int k = (m1 + m10)%10;

		N = m1 * 10 + k;
		if (N == start_num)break;
	}
	cout << count<<endl;


}