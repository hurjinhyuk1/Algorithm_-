#include <iostream>

using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;

	//a�� ��� ���� ���
	if ((b >= a&&a >= c) || (c >= a&&a >= b)) {
		cout << a << endl;
	}

	//b�� ��� ���� ���
	else if ((c >= b && b >= a) || (a >= b&& b >= c)) {
		cout << b << endl;
	}
	else
		cout << c << endl;
	
	return 0;
}