#include <stdio.h>
#include <set>

using namespace std;

int main(void)
{
	set<int> a;
	set<int>s2(a); // a�� ������ set�� s2
	a.insert(3);
	a.insert(4);
	a.insert(1);

	set<int>::iterator iter;
	set<int>::reverse_iterator iter2;

	//printf("%d",);

	for (iter = a.begin(); iter != a.end(); iter++) {
		printf("%d\n", *iter);
	}

	//������ ���
	
	
	for (iter2 = a.rbegin(); iter2 != a.rend(); iter2++) {
		printf("%d\n", *iter2);
	}
	




	return 0;
}