#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <functional>
using namespace std;
int main(void)
{
	int N;
	string a;
	vector<string> v;
	vector<vector<string>>v2;
	cin >> N;
	for (int i = 0; i < N; i++) {
		vector<string> element;
		for (int j = 0; j < N; j++) {
			cin >> a;
			element.push_back(a);
		}
		v2.push_back(element);
		
	}
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cout << v2[i][j];
		}
		cout << '\n';
	}

	sort(v2.begin(), v2.end(),greater<vector<string>>());
	// ��������.

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cout << v2[i][j];
		}
		cout << '\n';
	}
	sort(v2.begin(), v2.end());
	// ��������.

	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cout << v2[i][j];
		}
		cout << '\n';
	}


	return 0;
}