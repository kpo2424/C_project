#include <stdio.h>

int main()
{
    printf("카드결제승인\n");
    printf("             2022-12-01 20:56:09\n");
    printf("--------------------------------------------\n");
    printf("[정담]\n");
    printf("522-10-02088        TEL:010-4280-4207  임승완\n");
    printf("대전광역시 서구 계룡로620번길 43 1층\n");
    printf("--------------------------------------------\n");
    
    printf("%-10s %7s %7s %7s %7s\n","상품명","단가","수량","금액","R/R");
    printf("%-10s %7s %7d %7d %7d%%\n", "세트메뉴", "34,000", 1, 34000*1, 1);
    printf("%-10s %7.2f %7d %7d %7d%%\n", "김밥", 60.75, 1, 1500 *2, 1); 
    printf("%-10s %7s %7d %7d %7d%%\n", "김밥", "3,000", 2, 3000 *2, 6);
    
    printf("---------------------------------\n"); 
    printf("가맹점명     CU을지로파인애비뉴점\n");
    printf("사업자 번호          232-21-00198\n");
    printf("가맹점 번호           01012347894\n");
    printf("%s\n","대표자명                  최영준\n");

    return 0;
}
