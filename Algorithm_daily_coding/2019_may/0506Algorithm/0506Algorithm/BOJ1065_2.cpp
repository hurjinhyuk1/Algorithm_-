#include <iostream>

using namespace std;

//���° �ڸ������� �˷��ִ� �Լ�
int ciper(int n) {
	int count=0;
	while (n != 0) {
		n = n / 10;
		count++;
	}
	return count;
}
// �Ѽ����� �ƴ��� �˷��ִ� �Լ�
bool func(int n) {
	int k = ciper(n);
	if (k <= 2) {
		return true;
	}
	int small = n % 10;
	n = n / 10;
	int big = n % 10;
	int diff = big - small;

	for (int i = 0; i < k - 2; ++i) {
		int small = big;
		int big = (n / 10) % 10;
		if (diff != big - small) return false;
		n = n / 10;
	}

	return true;
}
int main(void)
{
	int N;
	int count = 0;
	cin >> N;
	//for������ �Է� ���� N�� 1���� N���� ���鼭 �Ѽ����� ���� �ľ�
	for (int i = 1; i <= N; ++i) {
		if (func(i) == true) {
			count++;
		}
	}
	cout << count << endl;


	return 0;
}