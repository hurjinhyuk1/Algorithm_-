#include <cstdio>

int main (void)
{
	int n;
	scanf("%d",&n);
	
	for(int i=2; i<n; ++i){
		if(n%i==0){
		printf("not prime");
		return 0;	
		}
		
	}
	printf("prime");
	
	return 0;
}
