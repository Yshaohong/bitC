#include<stdio.h>
#include<math.h>
// �����������α�����ֵ��������ֵ�����ݽ��н�����
/*int main()
{
	int A=5;
	int B=10;
	int C;
	C=A,A=B,B=C;
	printf("%d,%d\n",A,B);
	return 0;
}*/

//����������ʱ����������������������
/*int main()
{
	int a=5;
	int b=10;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d,%d\n",a,b);
	return 0;
}*/

//��10 �����������ֵ
/*int main()
{
	int i[10]={1,5,8,6,4,1,7,8,2,3};
	int max=i[0];
	int j;
	for(j=1;j<9;j++)
	{
		if(max<i[j])
		{
			max=i[j];
		}
	}
	printf("max=%d\n",max);
	return 0;
}*/

//�����������Ӵ�С���
/*int main()
{
	int a=2;
	int b=4;
	int c=5;
	int i;
	if(a<b)
	{
		i=a,a=b,b=i;
	}
	if(a<c)
	{
		i=a;a=c,c=i;
	}
	if(b<c)
	{
		i=b;b=c;c=i;
	}
	printf("%d,%d,%d\n",a,b,c);
	return 0;
}*/

//�������������Լ��
int main()
{
	int i;
	int min=4;
	int max=6;
	if(min<max)
	{
		i=min;
	}
	else
	{
		i=max;
	}
	for(i;i<=max;i--)
	{
		if(min%i==0&&max%i==0)
		{
			printf("%d\n",i);
		}
		else
		{
			break;
		}
	}
	return 0;
}
