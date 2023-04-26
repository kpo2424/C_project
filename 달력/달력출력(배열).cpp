#include <stdio.h>

int main()
{
	const int FIRST_YEAR = 1900;
	int lastDayOfMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; //배열 사용  
	int inputYear;
	printf("년도 입력:");
	scanf("%d", &inputYear);
	
	int inputMonth;
	printf("월 입력:");
	scanf("%d", &inputMonth);
	
	int leapYearCount;
	int days, startWeek;
	
	// 지난 년도 계산
	days = 0;
	days = (inputYear - FIRST_YEAR) * 365; // 나온 날짜/7로 요일 판단  
	
	// 윤년 계산
	leapYearCount = 0;
	for (int index = FIRST_YEAR; index < inputYear; index++) {
		if (index % 400 == 0) {
			leapYearCount++;
		}
		else if (index % 4 == 0 && index % 100 != 0) {
			leapYearCount++;
		}
	}
	days += leapYearCount;
	
	// 올해 윤년일 경우 날짜 판단
	if (inputMonth > 2) {
		if (inputYear % 400 == 0) {
			lastDayOfMonth[1] = 29;
		}
		else if (inputYear % 4 == 0 && inputYear % 100 != 0) {
			lastDayOfMonth[1] = 29;
		}
	}
	//lastDayOfMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }
	// 올해 지난 월 계산(배열) 
	for (int index = 0; index < inputMonth-1; index++) {
		days += lastDayOfMonth[index];
	}
	
	// 시작 요일 계산
	startWeek = days % 7;
	// 변환 일요일 부터 0 으로..
	if (startWeek == 6) {
		startWeek = 0;
	}
	else {
		startWeek++;
	}

	printf("%d년 %d월 %d일은 1900년 1월 1일부터 %d일 지났고, 요일은 %d 요일\n\n", 
		inputYear, inputMonth, 1, days, startWeek);

	printf("============== %d년 %d월 ================\n", inputYear, inputMonth);
	printf("%5s %5s %5s %5s %5s %5s %5s\n", "일", "월", "화", "수", "목", "금", "토");
	
	// 앞 공백 출력
	for (int index = 0; index < startWeek; index++) {
		printf("%5s ", " ");
	}
	// 나머지 day 출력
	for (int index = startWeek; index < (lastDayOfMonth[inputMonth - 1] + startWeek); index++) {
		printf("%5d ", index - startWeek + 1);
		if ((index + 1) % 7 == 0) {
			printf("\n");
		}
	}
	printf("\n==========================================\n");

	return 0;
}
