#include<stdio.h>
#include<string.h>
char a[20],b[20],c[20],d[20],e[20],f[20],g[20],h[20];
int sum=0, flag=1, flag2=1, i, j, k; 

int tran(char s[20]);//����ת��Ϊ���� 
void put(int w);//��� 
void tran2(int m);//����ת��Ϊ���� 
	
int main()
{
	scanf("%s",h);
	freopen(h,"r",stdin);
	for (i=0; ; i++)//������������ʼֵ 
	{ 
			 
		scanf("%s",a);
		if(strcmp(a,"����")) 
		{
			printf("��������,����������\n");
			continue;
		}
		else
		{
			scanf("%s%s",b,c);
			if(strcmp(c,"����"))
			{
				printf("��������,����������\n");
				continue;
			} 
			else
			{
				scanf("%s",d);
				sum=tran(d);
				if(flag==1)	continue;
				else break;
			}
		}
	}	
	
	for (j=1; flag2; j++) //����������̼����� 
	{
		for (i=1; ; i++)  
		{
			scanf("%s%s",e,f);
			if (strcmp(e,b) == 0)
			{
				scanf("%s",g);
				k = tran(g);
				if (flag ==1)
					continue;
				if (strcmp(f,"����")==0)	
					sum += k;
				else if (strcmp(f,"����")==0)
				{
					if (sum < k) 
						printf("%s����Ϊ��ֵ,����������\n",b);
					else 
						sum -= k;
				}
				else
				{
					printf("��������,����������1\n");
					continue;
				} 
			}
			else if (strcmp(e,"����")==0 && strcmp(f,b)==0)
			{
					flag2=0;
					break;
			}
			else 
			{
				printf("��������,����������2\n");
				continue;
			}
		}
	}
	put(sum);
	return 0;
}

int tran(char s[20])
{
	int num=0;
	flag=0;
	if(strcmp(s,"��")==0) num=0;
	else if(strcmp(s,"һ")==0) num=1;
	else if(strcmp(s,"��")==0) num=2;
	else if(strcmp(s,"��")==0) num=3;
	else if(strcmp(s,"��")==0) num=4;
	else if(strcmp(s,"��")==0) num=5;
	else if(strcmp(s,"��")==0) num=6;
	else if(strcmp(s,"��")==0) num=7;
	else if(strcmp(s,"��")==0) num=8;
	else if(strcmp(s,"��")==0) num=9;
	else if(strcmp(s,"ʮ")==0) num=10;
	else 
	{
		flag=1;
		printf("��������,����������\n"); 
	}
	return num;
}

void put(int w)
{
	int p,q;
	p=w/100;
	q=w%10;
	if(w<=10) //��λ�� 
		tran2(w);
	else if(w>10&&w<20) //С��20��ʮλ�� 
	{
		printf("ʮ");
		tran2(w%10);
	} 
	else if(w>=20&&w<100)//����20��ʮλ�� 
	{
		tran2(w/10);
		printf("ʮ");
		if(w%10!=0)	tran2(w%10);		
	}
	else if(w>=100)//��λ��
	{
		tran2(w/100);
		printf("��");
		if(w%100>0)
		{
			if(w%100>=10&&w%100<=20)
				printf("һ");
			else if(w%100<10&&w%100>0) 
				printf("��");
			put(w%100);
		}
	}
}

void tran2(int m)
{
	switch (m)
	{
		case 0: printf("��");break;
		case 1: printf("һ");break;
		case 2: printf("��");break;
		case 3: printf("��");break;
		case 4: printf("��");break;
		case 5: printf("��");break;
		case 6: printf("��");break;
		case 7: printf("��");break;
		case 8: printf("��");break;
		case 9: printf("��");break;
		case 10: printf("ʮ");
	}
}
