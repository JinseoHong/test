#include <stdio.h>

void show_menu()
{
	printf("~~~~#~~~~#~~~~#~~~~\n");
	printf("1. ���ϱ� \n");
	printf("2. ���� \n");
	printf("3. ���ϱ� \n");
	printf("4. ������ \n");
	printf("0. ���� \n");
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
	double result2;		//������� �Ǽ��� ���� �� �����ϱ� ���������� double ���ش�

	printf("���� 1 �Է��ϼ���(����) : ");
	scanf("%d",&num1);
	printf("���� 2 �Է��ϼ���(����) : ");
	scanf("%d",&num2);

	while(1)
	{
		show_menu();

		printf("���ϴ� ����� �˷��ּ���(��ȣ �Է�) : ");
		scanf("%d",&menu);

		if (menu==0) break ;	//���� ����������
		if (menu==1) result = add(num1,num2);		//���࿡ �޴��� 1�̸�, add�Լ��� num1�� num2�� �����ؼ� �� ������� result�� �ִ´�
		if (menu==2) result = minus(num1,num2);
		if (menu==3) result = multi(num1,num2);
		if (menu==4) result2 = diver(num1,num2);

		if (menu==4) printf("%.2lf \n",result2);		//���� ������� �Ǽ� ���� �ְ� (double / ������ d ��ſ� lf ��� ��)
		else printf("%d \n",result);				//�����Ⱑ �ƴ϶�� ���� ���� �ش� (int)
		printf("=================================\n\n");}

	return 0;
}