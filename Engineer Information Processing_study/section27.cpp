#define FIND 7
#include <stdio.h>

int main (void)
{

int i,j,k,L,m;
int a[10];
i=-1;

do{
	i++;
	scanf("%d",a[i]);
	
}while(i<9);

j=9;
for(k=0; k<=9; k++){
	if(a[k]>=FIND)
	L=a[k]-FIND;
	else
	L=FIND-a[k];
	
	if(L<=j){
		j=L;
		m=a[k];
	}
}
printf("%d",m);

return 0;	
}
