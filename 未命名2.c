#include<stdio.h>
int main(void)
{
	int a,b,c,m,n,i,j;
	printf("������������λ����");
	scanf("%d %d",&a,&b);
	m=a/10;
	n=a%10;
	i=b/10;
	j=b%10;
	c=j*1000+n*100+i*10+m;
	printf("��Ӧ��λ��Ϊ��%d\n",c );
	return 0;
}
