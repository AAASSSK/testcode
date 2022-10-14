#include <stdio.h>
#include <math.h>

void add(double num1, double num2)//각 연산 방식에 따른 함수 정의
{
	printf("연산결과=%lf", num1 + num2);
}
void sub(double num1, double num2)
{
	printf("연산결과=%lf", num1 - num2);
}
void mul(double num1, double num2)
{
	printf("연산결과=%lf", num1 * num2);
}
void div(double num1, double num2)
{
	printf("연산결과=%lf", num1 / num2);
}
void disp_menu() //메뉴 표시 함수 정의
{
	printf("1.덧셈\n2.뺄셈\n3.곱샘\n4.나눗셈\n번호를 선택하시오:");
}
int main() 
{
	int menunum;
	double num1;
	double num2;
	disp_menu();
	scanf_s("%d", &menunum); //menu선택 입력
	printf("실수를 입력하시오: "); //첫번째 실수 입력
	scanf_s("%lf", &num1);
	printf("실수를 입력하시오: "); //두번째 실수 입력
	scanf_s("%lf", &num2);
	if (menunum == 1)  //menu선택에 따른 각연산 함수를 선택하는 조건문
		add(num1, num2);
	else if (menunum == 2)
		sub(num1, num2);
	else if (menunum == 3)
		mul(num1, num2);
	else if (menunum == 4)
		div(num1, num2);
}

