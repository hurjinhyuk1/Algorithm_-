#include <stdio.h>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <functional> // sort �Լ� ���� greater �� �������� ����� ��
#include <string>
#include <vector>
char arr[10] = "123456789";

using namespace std;

bool rsc(char a, char b)
{
	return a < b;
}
//sort �Լ��� ���ڿ� / ����/ ���� �� ���� ����.
int main(void)
{
	vector<string> a;
	a.push_back("aa");
	a.push_back("cc");
	a.push_back("bb");
	a.push_back("cb");

	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << endl;
	}

	sort(a.begin(), a.end());

	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << endl;
	}



	return 0;
}

