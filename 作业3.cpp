#include<stdio.h>
#include<string.h>
char a[20],b[20],c[20],d[20],e[20],f[20],g[20],h[20];
int sum=0,flag=0, flag2=1, i, j, k; 

int tran0(char s[20]);//中文数字转为阿拉伯数字 
int tran(char s[20]);//中文一位数转换为阿拉伯数字 
void put(int w);//输出 
void tran2(int m);//阿拉伯数字转换为中文 
	
int main()
{
	for (i=0; ; i++)//输入变量及其初始值 
	{
		flag=0;
		scanf("%s%s%s%s",a,b,c,d);
		if(strcmp(a,"整数")!=0&&strcmp(a,"自然数")!=0) 
		{
			printf("输入有误,请重新输入\n");
			continue;
		}
		else
		{
			if(strcmp(c,"等于"))
			{
				printf("输入有误,请重新输入\n");
				continue;
			} 
			else
			{
				sum=tran0(d);
				if(flag) continue;
				else break;
			}
		}
	}	
	
	for (j=1; flag2; j++) //输入运算过程及结束 
	{
		for (i=1; ; i++)  
		{
			scanf("%s%s",e,f);
			if (strcmp(e,b) == 0)
			{
				scanf("%s",g);
				k = tran0(g);
				if (flag)
					continue;
				if (strcmp(f,"增加")==0)	
					sum += k;
				else if (strcmp(f,"减少")==0)
				{
					if (sum<k && strcmp(a,"自然数")==0) 
						printf("%s不能为负值,请重新输入\n",b);
					else 
						sum -= k;
				}
				else
				{
					printf("输入有误,请重新输入\n");
					continue;
				} 
			}
			else if (strcmp(e,"看看")==0 && strcmp(f,b)==0)
			{
					flag2=0;
					break;
			}
			else 
			{
				printf("输入有误,请重新输入\n");
				continue;
			}
		}
	}
	put(sum);
	return 0;
}

int tran0(char s[20])
{
	int len,n1,n2,n;
	char a1[20]={"0"},b1[20]={"0"},c1[20]={"0"},d1[20]={"0"},t1[20]={"0"};
	flag=0;
	len=strlen(s);
	strncpy(d1,s,2);
	if(strcmp(d1,"负")==0)//判断是否为负数 
	{
		if(strcmp(a,"整数")) flag+=1;
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

void put(int w)
{
	int p,q;
	p=w/100;
	q=w%10;
	if(w<0)
	{
		printf("负");
		w=-w;
	}	
		
	if(w<=10) //个位数 
		tran2(w);
	else if(w>10 && w<20) //小于20的十位数 
	{
		printf("十");
		tran2(w%10);
	} 
	else if(w>=20 && w<100)//大于20的十位数 
	{
		tran2(w/10);
		printf("十");
		if(w%10!=0)	tran2(w%10);		
	}
	else if(w>=100)//百位数
	{
		tran2(w/100);
		printf("百");
		if(w%100>0)
		{
			if(w%100>=10 && w%100<=20)
				printf("一");
			else if(w%100<10 && w%100>0) 
				printf("零");
			put(w%100);
		}
	}
}

void tran2(int m)
{
	switch (m)
	{
		case 0: printf("零");break;
		case 1: printf("一");break;
		case 2: printf("二");break;
		case 3: printf("三");break;
		case 4: printf("四");break;
		case 5: printf("五");break;
		case 6: printf("六");break;
		case 7: printf("七");break;
		case 8: printf("八");break;
		case 9: printf("九");break;
		case 10: printf("十");
	}
}
