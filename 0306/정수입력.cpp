#include <stdio.h>

int main()
{ 
    int number1;
	int number2;
	int sum;
        
    printf("정수를 두개 입력하세요: ");
	scanf("%d %d", &number1, &number2);
	sum = number1 + number2;
	
	printf("%d + %d = %d\n", number1, number2, sum);
	printf("%d + %d = %d\n", number1, number2, number1 + number2 );
		
        return 0;
}
