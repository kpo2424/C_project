#include <stdio.h>

int main()
{ 
    int base;
	int height;
	int area;
	
    printf("�ﰢ�� ���̸� ���ϼ���:");  
	scanf("%d %d", &base, &height);
	
	area = base * height * 0.5;
	
	printf("%d * %d * 0.5 = %d\n", base, height, area);
	
        return 0;
}

