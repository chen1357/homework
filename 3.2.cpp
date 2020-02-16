#include<stdio.h>
#include<string.h>
void put(int w);
void tran2(int m);
int main()
{
	printf("3    ");put(3);printf("\n");
	printf("19   ");put(19);printf("\n");
	printf("60   ");put(60);printf("\n");
	printf("905  ");put(905);printf("\n");
	printf("-8   ");put(-8);printf("\n");
	printf("-117 ");put(-117);printf("\n");
	printf("-650 ");put(-650);printf("\n");
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
