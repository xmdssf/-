//#include<stdio.h>
//#include<math.h>
//#define pi 3.14
//int main()
//{
//	double c,n=0,n1=0,n2=0,n3=0,n4=0,d=20,D=1500,l1=700,l2=1000,l3=1300;//nΪԲ�λ�̳ʹ�õĻ���n4Ϊ�����λ�̳ʹ�õĻ�
//	c=pi*D;
//	while(n*d<c)
//	{
//		if((n+1)*d<c)
//		n+=1;
//		if((n+1)*d>c)
//		break;
//	}
//		printf("Բ�λ�̳ʹ�õĻ�=%.0f\n",n);
//	while(n1*d<l1)
//	{
//		n1+=1;
//		if(n1*d>l1)
//		break;
//	}
//		printf("%f\n",n1);
//		while(n2*d<l2)
//	{
//		n2+=1;
//		if(n2*d>l2)
//		break;
//	}
//		printf("%f\n",n2);
//		while(n3*d<l3)
//	{
//		n3+=1;
//		if(n3*d>l3)
//		break;
//	}
//		printf("%f\n",n3);
//	n4=n1+n2+n3;
//	printf("�����λ�̳ʹ�õĻ�=%.0f\n",n4);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int a=1,A=2,b=3,B=4;//aΪС��,AΪ����,bΪ����,BΪ����
	A=b;
	A=0;
	A=a;
	a=0;
	A=B;
	printf("%d%d",a,A);
	return 0;
}
