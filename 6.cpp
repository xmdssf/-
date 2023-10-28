#include<stdio.h>
int main()
{
	int a=2,A=1,b=3,B=4;//a为小盆,A为大盆,b为内衣,B为外套,1为内衣洗洁精，2为外套洗洁精，3为内衣，4为外套，0为洗完结束
	A=b;
	A=0;
	A=a;
	a=0;
	A=B;
	A=0;
	printf("a=%d\nA=%d",a,A);
	return 0;
}