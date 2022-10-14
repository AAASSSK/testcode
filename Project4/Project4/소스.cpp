#include <stdio.h>
#include <math.h>
int main()
{
	int sum = 0; //합한 값 저장하는 변수 선언
	printf("양의 정수 하나를 입력하시오.\n");
	int n;
	scanf_s("%d", &n); //n받아오기
	for (int i = 1; i <= n; ++i) //i^^2를 n까지 모두 더하는 작업
	{
		sum += pow(i,2);
	}
	printf("%d", sum); //sum결과 출력




}