#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int A, B, C,D;
	cin >> A >> B >> C;
	vector<int> a(10, 0);
	D = A*B*C;

	
		while(D != 0) {
			a[D % 10]++;
			D = D / 10;
	}

	for (int i = 0; i < 10; i++) {
		cout<<a[i]<<endl;
		
	}


	// 1000�� 3�� ���ϸ�, 10��
	// int�� 21����� Ŀ������.
	// 2000�� longlong �������




}