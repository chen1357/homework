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
		printf("��");
		w=-w;
	}	
		
	if(w<=10) //��λ�� 
		tran2(w);
	else if(w>10 && w<20) //С��20��ʮλ�� 
	{
		printf("ʮ");
		tran2(w%10);
	} 
	else if(w>=20 && w<100)//����20��ʮλ�� 
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
			if(w%100>=10 && w%100<=20)
				printf("һ");
			else if(w%100<10 && w%100>0) 
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
