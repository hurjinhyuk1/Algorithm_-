#include <iostream>

using namespace std;
void linearSearch(int arr[]) {

	for (int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
		if (number == arr[i]) {
			cout << "�ش� ���ڰ� �����մϴ�." << endl;
			return;
		}

	}
	cout << "�ش� ���ڰ� ���������ʽ��ϴ�." << endl;
}

int number;
//int result;
int main(void)
{
    int arr[] = { 10,54,29,65,54,76 };
	cin >> number;
	linearSearch(arr);
	
	return 0;

}