#include <cstdio>

int main (void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	
	if(a%2==1){
	printf("Ȧ��+");
		if(b%2==1)printf("Ȧ��=¦��");
		else printf("¦��=Ȧ��");	
	}
		else{
		printf("¦��+"); 
			if(b%2==1)printf("Ȧ��=Ȧ��");
			else printf("¦��=¦��");	
		
		} 
		
	return 0; 
}
