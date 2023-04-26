#include<stdio.h>
int main()
{
	float won, change;
	float dollar, yen, euro;
	float exchangerate;
	int country;
	int thousand, fivehundred, hundred, ten; 
	
	printf("환전을 원하는 금액을 입력하세요(원화) : ");
	scanf("%f", &won); 
	
	printf("환전할 외화를 선택하세요(1:USD, 2:JPY, 3:EUR):");
	scanf("%d", &country);
	
	
	switch(country)
	{
		
	case 1 :
		exchangerate = 1320.90;
			
		printf("기준 환율:%.2f\n", exchangerate);
		
		dollar = (float)won/exchangerate;
		change = won-(int)dollar*exchangerate;
		change = (int)(change/10)*10;
		
		printf("환전 결과\n달러:%d\n거스름돈:%d원\n", (int)dollar, (int)change);
	break;
	
	
	
	case 2 :
		exchangerate = 959.44;
			
		printf("기준 환율:%.2f\n", exchangerate);
		
		yen = (float)won/exchangerate;
		change = won-(int)yen*exchangerate;
		change = (int)(change/10)*10;
		
		printf("환전 결과\n엔:%d\n거스름돈:%d원\n", (int)(yen*100), (int)change);      //단위 적용해서 *100 
	break;
	
	
	
	case 3 :
		exchangerate = 1391.54;
			
		printf("기준 환율:%.2f\n", exchangerate);
		
		euro = (float)won/exchangerate;
		change = won-(int)euro*exchangerate;
		change = (int)(change/10)*10;
		
		printf("환전 결과\n유로:%d\n거스름돈:%d원\n", (int)euro, (int)change);
	break;	
	}
		
		thousand = (int)change / 1000;
		fivehundred = ((int)change % 1000) / 00;
		hundred = ((int)change % 500) / 100;
		ten = ((int)change % 100) / 10;
		
		printf("천원권 : %d개\n오백원 : %d개\n백원 : %d개\n십원 : %d개", thousand, fivehundred, hundred, ten);
	
		
	return 0;
	
}
