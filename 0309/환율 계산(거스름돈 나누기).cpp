#include <stdio.h>
#include <math.h>

int main()
{
	int won;
		
	printf("환전을 원하는 금액을 입력하세요(원화):");
	scanf("%d", &won);
	printf("기준 환율:1194.50\n환전 결과\n");
	
	float a = won / 1194.50; // a=환전하는 금액 
	float b = (a - floor(a)); // b= 소수점 밑 달러
		
	printf("달러:%g달러\n", floor(a)); // 소수점 밑 내림, .0없애기 
	
	if (a == floor(a))	// 환전하는 금액이 딱 나누어 떨어지면 거스름돈 없음 
	printf("거스름돈:0원");
  	
	else// 소수점 밑으로 달러가 남으면    
	printf("거스름 돈:%g원\n", floor((b*1194.50)*0.1)/0.1); // 달러 * 환율= 거스름 돈 (일의 자리 내림) 
	
	int change = floor((b*1194.50)*0.1)/0.1;	
	int thousand = floor(change * 0.001); //천원권 갯수 
	printf("천원권:%d장\n", thousand); // 왜 %d인데 소주점 아래 사라짐? int라서 
		
	int hundredchange = abs((thousand * 1000) - change); //몇 백원 단위 잔돈 550원 
	int hundred = floor(hundredchange * 0.01); //백원 단위 잔돈 갯수 
	
	if (hundred >= 5) //오백원 이상일 때 
	printf("오백원:1개\n백원:%d개\n", hundred-5);
	else if (hundred < 5) // 오백원 미만일 때 
	printf("오백원:0개\n백원:%d개\n", hundred);	
	
	int tenchange = abs((hundred * 100) - hundredchange); //몇 십원 단위 잔돈 60원 
	int ten = floor(tenchange * 0.1); // 십원 갯수 
	
	printf("십원:%d개\n", ten);
	
return 0;	 
}
