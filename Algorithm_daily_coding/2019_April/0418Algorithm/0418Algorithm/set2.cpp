#include <cstdio>
#include <set>
#include <vector>
using namespace std;
vector<int> a(5);

int solution(vector<int> a)
{
	set<int> b;

	for (int i = 0; i < a.size(); ++i) {
		int dem = b.size();
		b.insert(a[i]);
		if (dem == b.size()) return a[i];

	}
	return -1;
}
int main(void)
{
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	a[3] = 2;
	a[4] = 1;

	printf("%d\n", a.size());
	int result = solution(a);
	printf("%d\n", result);

	return 0;
}
// vector�� �ʱ�ȭ �ϴ� �ΰ��� ���
// �⺻������ vector�� 1���� �迭�� ���ٰ� ��������.
// vector<int>a; �ϰ� a.push_back(1);
//vector<int> a(5) ���̰� 5�� ���͸� �����, a[0]= 1.. �ʱ�ȭ