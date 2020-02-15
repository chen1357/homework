#include<stdio.h>
#include<string.h>
int flag=1;
int main()
{
	int i,num;
	int tran(char s[20]);
	char a[11][4];
	strcpy(a[0],"零");
	strcpy(a[1],"一");
	strcpy(a[2],"二");
	strcpy(a[3],"三");
	strcpy(a[4],"四");
	strcpy(a[5],"五");
	strcpy(a[6],"六");
	strcpy(a[7],"七");
	strcpy(a[8],"八");
	strcpy(a[9],"九");
	strcpy(a[10],"十");
	strcpy(a[11],"十一");
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
	{
		flag=1;
		printf("输入有误,请重新输入\n"); 
	}
	return num;
}
