#include <stdio.h>
int main()
{
	int mile;
	printf("%s","마일을 입력하세요");
	scanf_s("%d", &mile);  //마일 입력 받기
	int meter = mile * 1609;  //마일을 기준으로 미터 계산해서 변수에 저장
	printf("%d 마일는 %d 미터입니다", mile, meter);  //미터 출력하기
	return 0;
}