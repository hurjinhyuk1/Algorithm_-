#pragma warning(disable:4996)
#include <stdio.h>

int AllScore() {
	int math, korean, eng;
	scanf("%d %d %d", &math, &korean, &eng);
	int sum = math + korean + eng;
	return sum;
}
int AllAvg(int sum) {
	double avg=sum / 3;
	return avg;
}
int PeongScore();
int main(void)
{
	int N;
	
	printf("������ �ű� �ο��� �Է��Ͻÿ�->");
	scanf("%d", &N);
	while (N--) {
		int sum=AllScore();
		double avg=AllAvg(sum);
		printf("����: %d, ���:%.3f\n", sum, avg);
	}



	return 0;
}