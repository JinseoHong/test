#include <stdio.h>

void show_menu()
{
	printf("~~~~#~~~~#~~~~#~~~~\n");
	printf("1. 더하기 \n");
	printf("2. 빼기 \n");
	printf("3. 곱하기 \n");
	printf("4. 나누기 \n");
	printf("0. 종료 \n");
	printf("~~~~#~~~~#~~~~#~~~~\n");
}

int add(int x, int y){
	printf("%d + %d = ",x,y);
	return x+y;}
int minus(int x, int y){
	printf("%d - %d = ",x,y); 
	return x-y; }
int multi(int x, int y){
	printf("%d x %d = ",x,y);
	return x*y; }
double diver(int x, int y){
	printf("%d / %d = ",x,y);
	return (double)x/y; }

int main(void)
{
	int num1, num2;
	int result;
	int menu;
	double result2;		//나누기는 실수가 나올 수 있으니까 예외적으로 double 써준다

	printf("숫자 1 입력하세용(정수) : ");
	scanf("%d",&num1);
	printf("숫자 2 입력하세용(정수) : ");
	scanf("%d",&num2);
	
	printf("hi guys\n");

	while(1)
	{
		show_menu();

		printf("원하는 계산을 알려주세용(번호 입력) : ");
		scanf("%d",&menu);

		if (menu==0) break ;	//루프 빠져나가기
		if (menu==1) result = add(num1,num2);		//만약에 메뉴가 1이면, add함수에 num1과 num2를 대입해서 그 결과값을 result에 넣는다
		if (menu==2) result = minus(num1,num2);
		if (menu==3) result = multi(num1,num2);
		if (menu==4) result2 = diver(num1,num2);

		if (menu==4) printf("%.2lf \n",result2);		//만약 나누기면 실수 값을 주고 (double / 더블은 d 대신에 lf 써야 함)
		else printf("%d \n",result);				//나누기가 아니라면 정수 값을 준다 (int)
		printf("=================================\n\n");}

	return 0;
}
