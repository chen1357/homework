#include<stdio.h>
#include<string.h>
int flag=1;
int main()
{
	int i,num;
	int tran(char s[20]);
	char a[11][4];
	strcpy(a[0],"��");
	strcpy(a[1],"һ");
	strcpy(a[2],"��");
	strcpy(a[3],"��");
	strcpy(a[4],"��");
	strcpy(a[5],"��");
	strcpy(a[6],"��");
	strcpy(a[7],"��");
	strcpy(a[8],"��");
	strcpy(a[9],"��");
	strcpy(a[10],"ʮ");
	strcpy(a[11],"ʮһ");
	for (i=0;i<=11;i++)
	{
		num=tran(a[i]);
		if(flag==0)
			printf("%d ",num);
	}
	
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
