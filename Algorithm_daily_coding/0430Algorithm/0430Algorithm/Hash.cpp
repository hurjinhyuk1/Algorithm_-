//�ؽ� ���̺�
//mislav stanko mislav ana
//participant
// completion..
// �ؽ� ���̺��� ������ ��
//�ؽ� �浹�� �߻��ϸ�, Chaining OR Open Addressing�� ���ؼ� �ذ�


#include <iostream>
#define MAX_HASH 10
using namespace std;

typedef struct Node {
	int id;

}Node;

Node*hashTable[MAX_HASH];


int main(void)
{
	for (int i = 0; i < MAX_HASH; i++) {
		Node*node = (Node*)malloc(sizeof(Node));
		node->id = i;
		hashTable[i] = node;
	}
	return 0;


	return 0;
}
