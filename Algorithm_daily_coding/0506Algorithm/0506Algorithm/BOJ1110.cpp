#include <iostream>
using namespace std;


int main(void)
{
	int N;
	int n10, n1;
	int m; //���� �ڸ��� ���� �ڸ��� ������ �̷������ ��
	int k; //���� ���� �� ��.
	int count = 0; // ����Ŭ�� ���� ���ϱ� ���� ����
	int start_num;
	cin >> N;
	start_num = N;

	while (true) {
		
		count++;
		n10 = N / 10; // ���� �ڸ���
		n1 = N % 10; // ���� �ڸ���
		m = (n10 + n1)%10;
		k = (10 * n1 + m);
		if (k == start_num)break;
		N = k;

	}
	cout << count << endl;
	

	return 0;
}