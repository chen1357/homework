#include<stdio.h>
#include<string.h>
int flag=0;	
int tran(char s[20]);
int tran0(char s[20]);
int main()
{
	
	int i;
	char a[20],b[20],c[20],d[20],e[20],f[20],g[20],h[20];
	strcpy(a,"��");
	strcpy(b,"ʮ��");
	strcpy(c,"��ʮ��");
	strcpy(d,"��ʮ");
	strcpy(e,"����");
	strcpy(f,"��ʮ��");
	strcpy(g,"����ʮ");
	strcpy(h,"��"); 
	printf("%s       %d\n",a,tran0(a));
	printf("%s     %d\n",b,tran0(b));
	printf("%s   %d\n",c,tran0(c));
	printf("%s     %d\n",d,tran0(d));
	printf("%s     %d\n",e,tran0(e));
	printf("%s   %d\n",f,tran0(f));
	printf("%s   %d\n",g,tran0(g));
	printf("%s       %d\n",h,tran0(h));
}
int tran0(char s[20])
{

	int len,n1,n2,n=0;
	char a1[20]={"0"},b1[20]={"0"},c1[20]={"0"},d1[20]={"0"},t1[20]={"0"};
	flag=0;
	len=strlen(s);
	strncpy(d1,s,2);
	if(strcmp(d1,"��")==0)//�ж��Ƿ�Ϊ���� 
	{
	//	if(strcmp(a,"����")) flag+=1;
		strcpy(t1,s+2);
		len=strlen(t1);
		if(len<=0) flag+=1;
	}														
	else strcpy(t1,s);
	if(len==2)  
	{
		n=tran(t1);
	}
	if(len==4)//�ж��Ƿ�Ϊ������ 
	{
		strncpy(a1,t1,2);
		strncpy(b1,t1+2,2);
		if(strcmp(a1,"ʮ")==0) 
			n=10+tran(b1);
		else if(strcmp(b1,"ʮ")==0)
			n=tran(a1)*10;
		else flag+=1;
	}
	if(len==6)//�ж��Ƿ�Ϊ������ 
	{
		strncpy(a1,t1,2);
		strncpy(b1,t1+2,2);
		strncpy(c1,t1+4,2);
		if(strcmp(b1,"ʮ")) flag+=1;
		else
		{
			n=tran(a1)*10+tran(c1);
		}
	}
	if(flag) 
		printf("������������,����������\n");
	if(strcmp(d1,"��")==0) n=-n;
	return n;
}


int tran(char s[20])
{
	int num=0;
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
		flag+=1;
	return num;
}



