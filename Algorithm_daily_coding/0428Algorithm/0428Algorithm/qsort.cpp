#include <stdio.h>
#include <stdlib.h> // qsort()
#include <string.h> // strcmp()

int comparisonFunctionString(const void *a, const void *b);


int main(void) {
	const int ELEMENTS = 8; // ��� ����

	char array[ELEMENTS][6 + 1] = {
		"�ͱ�",
		"�����",
		"��ĥ��",
		"�嵿��",
		"������",
		"��â��",
		"Ȳ����",
		"������" };


	qsort(array, ELEMENTS, sizeof(array[0]), comparisonFunctionString);

	for (int i = 0; i < ELEMENTS; i++)
		printf("%s\n", array[i]);

	return 0;
}




int comparisonFunctionString(const void *a, const void *b) {
	printf("%d", strcmp((char *)a, (char *)b));
	return(strcmp((char *)a, (char *)b));
}