//�� �� �׸���
// �̰��� �������� �������� ����Ǿ� ����
// ���� ������ ������ ICN
// stack�� �׻� ������� ������ ������ ����.
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <functional>
#include <iostream>
using namespace std;

// input data
/*
vector<string>solution(vector<vector<string>>tickets)
{
	vector<string>answer;
	sort(tickets.begin(), tickets.end(),greater<vector<string>>());
	// �켱 ticket���� sort�Ѵ�. ������������
	unordered_map<string, vector<string> >routes;
	for (int i = 0; i < tickets.size(); ++i)
		routes[tickets[i][0]].push_back(tickets[i][1]);
	//��߰����� Ű�� ���δ�.
	//ticket�� ���ĺ� ������..

	vector<string> s = vector<string>{ "ICN" };
	while (!s.empty()) {
		string airport = s.back();
		if (routes.find(airport) == routes.end() || routes[airport].size() == 0) {
			//���� ��� �ִ�. ǥ�� �־��µ� ��  �����.
			answer.push_back(airport);
			s.pop_back();

		}
		else {
			s.push_back(routes[airport].back());
			routes[airport].pop_back();
		}
			
	}
	reverse(answer.begin(), answer.end());
		return answer;
}
*/

int main(void)
// AAA BBB
// CCC DDD
{
	int k = 0;
	vector<vector<string>>v;
	vector<string> a;
	vector<string>b;
	a.push_back("c");
	a.push_back("b");
	a.push_back("a");

	b.push_back("d");
	b.push_back("e");
	b.push_back("f");


	cout << a.size() << endl;
	v.push_back(a);
	v.push_back(b);
	for (int i = 0; i < v.size(); ++i) {
		for (int j = 0; j < v[0].size(); j++) {
			cout << v[i][j];
		}
		cout << endl;
		
	}
	cout << "hello" << endl;

	sort(v.begin(), v.end(),greater<vector<string>>());
	
	for (int i = 0; i < v.size(); ++i) {
		sort(v[i].begin(), v[i].end());
		for (int j = 0; j < v[0].size(); j++) {
			cout << v[i][j];
		}
		cout << endl;
	}

	
	/*
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < 2; j++) {
			cout << v[i][j] << endl;
		}
	}
	*/

	
	return 0;
}