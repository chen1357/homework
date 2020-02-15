#include<stdio.h>
#include<string.h>
int flag=0;	
int tran(char s[20]);
int tran0(char s[20]);
int main()
{
	
	int i;
	char a[20],b[20],c[20],d[20],e[20],f[20],g[20],h[20];
	strcpy(a,"三");
	strcpy(b,"十七");
	strcpy(c,"三十九");
	strcpy(d,"七十");
	strcpy(e,"负七");
	strcpy(f,"负十六");
	strcpy(g,"负九十");
	strcpy(h,"负"); 
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
	if(strcmp(d1,"负")==0)//判断是否为负数 
	{
	//	if(strcmp(a,"整数")) flag+=1;
		strcpy(t1,s+2);
		len=strlen(t1);
		if(len<=0) flag+=1;
	}														
	else strcpy(t1,s);
	if(len==2)  
	{
		n=tran(t1);
	}
	if(len==4)//判断是否为两个字 
	{
		strncpy(a1,t1,2);
		strncpy(b1,t1+2,2);
		if(strcmp(a1,"十")==0) 
			n=10+tran(b1);
		else if(strcmp(b1,"十")==0)
			n=tran(a1)*10;
		else flag+=1;
	}
	if(len==6)//判断是否为三个字 
	{
		strncpy(a1,t1,2);
		strncpy(b1,t1+2,2);
		strncpy(c1,t1+4,2);
		if(strcmp(b1,"十")) flag+=1;
		else
		{
			n=tran(a1)*10+tran(c1);
		}
	}
	if(flag) 
		printf("数字输入有误,请重新输入\n");
	if(strcmp(d1,"负")==0) n=-n;
	return n;
}


int tran(char s[20])
{
	int num=0;
	if(strcmp(s,"零")==0) num=0;
	else if(strcmp(s,"一")==0) num=1;
	else if(strcmp(s,"二")==0) num=2;
	else if(strcmp(s,"三")==0) num=3;
	else if(strcmp(s,"四")==0) num=4;
	else if(strcmp(s,"五")==0) num=5;
	else if(strcmp(s,"六")==0) num=6;
	else if(strcmp(s,"七")==0) num=7;
	else if(strcmp(s,"八")==0) num=8;
	else if(strcmp(s,"九")==0) num=9;
	else if(strcmp(s,"十")==0) num=10;
	else 
		flag+=1;
	return num;
}



