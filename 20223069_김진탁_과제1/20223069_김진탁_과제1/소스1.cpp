#include <stdio.h>
int main()
{
	int earth;
	printf("%s", "지구에서의 몸무게를 입력하세요(단위 kg): ");  
	scanf_s("%d", &earth);          //지구의 몸무게 입력 받기
	int moon = earth * 17 / 100;   //지구의 몸무게로 달에서의 몸무게 저장
	printf("달에서의 몸무게는 %d kg입니다", moon); //달에서의 몸무게 출력
	return 0;

}