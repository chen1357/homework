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
