#pragma warning(disable:4996)
#include <stdio.h>

int **arr;
int number_arr[4];
int n, m;
void rotate(int**arr, int y, int x) {
	printf("rotate�Լ��Դϴ�.\n");
	int count = 0;
	int sum = 0;
	for (int i = 0; i < y; ++i) {
		for (int j = 0; j < x; ++j) {
			sum += arr[i][j];
			count++;
		}
	}
	printf("%d %d\n", count, sum);
}

void find_number(int** arr, int y, int x) {
	for (int i = 0; i < y; ++i) {
		for (int j = 0; j < x; ++j) {
			if (arr[i][j] == 1) {
				number_arr[1]++;
			}
			else if (arr[i][j] == 2) {
				number_arr[2]++;
			}
			else if (arr[i][j] == 3) {
				number_arr[3]++;
			}


		}
	}
	printf("%d %d %d", number_arr[1], number_arr[2], number_arr[3]);
}
int main(void)
{

	
	
	scanf("%d %d", &n, &m);
	arr = new int*[m]; //������ ���̰� m�� 1���� �迭
	for (int i = 0; i < n; ++i) {
		arr[i] = new int[m];
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			scanf("%d", &arr[i][j]);
		}
	}
	//printf("%d", sizeof(arr));
	int y_distance = n;
	int x_distance = m;

	printf("%d %d\n", y_distance, x_distance);
	rotate(arr,y_distance,x_distance);
	find_number(arr, y_distance, x_distance);
	return 0;
}
//2���� �迭 �����Ҵ�
// int ** arr;
// arr=new *int[x] �� 1���� �迭���� ���� �� ����
// for������ n �� ���� ���� ��ŭ ������ָ� �ȴ�.

//2���� �迭 �Ű����� �ޱ� int **arr�� �ϰų� int(*arr)[x]