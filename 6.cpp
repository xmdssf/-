#include<stdio.h>
int main()
{
	int a=2,A=1,b=3,B=4;//aΪС��,AΪ����,bΪ����,BΪ����,1Ϊ����ϴ�ྫ��2Ϊ����ϴ�ྫ��3Ϊ���£�4Ϊ���ף�0Ϊϴ�����
	A=b;
	A=0;
	A=a;
	a=0;
	A=B;
	A=0;
	printf("a=%d\nA=%d",a,A);
	return 0;
}