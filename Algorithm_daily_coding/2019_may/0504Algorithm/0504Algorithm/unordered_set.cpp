#include <unordered_set>
#include <vector>
#include <iostream>
using namespace std;

int main(void)
{
	unordered_set<int>a(5);

	//a.insert(1);
	a.insert(2);
	a.insert(3);
	a.insert(4);
	a.insert(5);
	/*
	for (auto& i : a) {
		if (a.find(i) != a.end()) {
			//a �ȿ� i�� �ִٸ� (i�� 2,3,4,5)
			cout << "hi" << endl;
			//cout << a.find(1) << endl;
		}
		else {
			cout << "good " << endl;
		}
	}
	*/
	for (auto&i : a) {
		if (a.find(9) == a.end()) {
			//a�ȿ� 9�� ���ٴ� �ǹ�
			cout << "����" << endl;
		}
	}




	return 0;
}