#include<stdio.h>
#include<math.h>
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
/*int Fei(int n)//�ݹ�
{

	if(n==1||n==2)
	{
		return 1;
	}
	else
	{
		return Fei(n-2)+Fei(n-1);
	}
}*/

//��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
/*int Pow(int n,int k)
{
	if(k==0)
	{
		return 1;
	}
	if(k==1)
	{
		return n;
	}
	else
	{
		return n*Pow(n,k-1);
	}
}*/

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
/*int DigitSum(int n)
{
	int i=0;
	if(n<10)
	{
		return n;
	}
	else
		return n%10+DigitSum(n/10);//1+7+2+9,ģ10ȡ�࣬��10�����ƶ�һλ
}*/
//��n�Ľ׳�
/*int C(int n)
{
	int i;
	int sum=1;
	for(i=1;i<=n;i++)
		{
			sum=sum*i;
			printf("%d\n",sum);
	     }
	return sum;
}*/
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
int Zhen(int n)
{
	if(n>9)
	{
		Zhen(n/10);
	}
	printf("%d ",n%10);

}


int main()
{
	Zhen(123);
	//C(4);
	//printf("%d\n",DigitSum(1729));
	//printf("%d \n",Pow(2,3));
	/*int n,i;
	scanf("%d",&n);
	printf("쳲���������Ϊ:",n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",Fei(i));
	}
	printf("\n");*/
}