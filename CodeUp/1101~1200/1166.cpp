#include <cstdio>

int main (void)
{
	int year;
	scanf("%d",&year);
	if((year%4==0&&year%100!=0)||year%400==0)printf("yes");
	else printf("no");
	
	return 0;
}
