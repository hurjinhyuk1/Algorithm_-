#include <stdio.h>


int memo[11]; //dp������ ������� ������ ����.

int dp(int x)
{
	if (x == 1) memo[x] = 1;
	if (x == 2) memo[x] = 1;
	if (memo[x]!= 0){
		// 
		return memo[x];
	}
	return memo[x] = dp(x - 1) + dp(x - 2);
	
	

}


int main(void)
{

	printf("%d\n", dp(10));

	return 0;
}