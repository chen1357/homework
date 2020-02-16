#include<stdio.h>
int main()
{
	void put(int w);
	printf("7   ");put(7);printf("\n");
	printf("10  ");put(10);printf("\n");
	printf("16  ");put(16);printf("\n");
	printf("66  ");put(66);printf("\n");
	printf("90  ");put(90);printf("\n");
	printf("300 ");put(300);printf("\n");
	printf("517 ");put(517);printf("\n");
	printf("730 ");put(730);printf("\n");
	printf("999 ");put(999);printf("\n");
} 
void put(int w)
{
	void tran2(int m);
	int p,q;
	p=w/100;
	q=w%10;
	if(w<=10) //个位数 
		tran2(w);
	else if(w>10&&w<20) //小于20的十位数 
	{
		printf("十");
		tran2(w%10);
	} 
	else if(w>=20&&w<100)//大于20的十位数 
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
			if(w%100>=10&&w%100<=20)
				printf("一");
			else if(w%100<10&&w%100>0) 
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
