#include <cstdio>
#include <iostream>

int main (void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	if(a==b&&b==c&&c==a){
		printf("���ﰢ��");
	}
 	else if((a==b||b==c||c==a)&&(a+b>c)&&(b+c>a)&&(c+a>b)){
 		printf("�̵�ﰢ��");
	 } 
	 
	 else if((a*a+b*b==c*c)||(b*b+c*c==a*a)||(c*c+a*a==b*b)){
	 	printf("�����ﰢ��");
	 }
	 
	 else if((a+b>c)&&(b+c>a)&&(c+a>b)){
	 	printf("�ﰢ��");
	 } // 2 4 5
	 else{
	 	printf("�ﰢ���ƴ�");
	 } 
	 
	 return 0; 
}
