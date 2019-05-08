#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int ADD(int a, int b)
{
	return a + b;
}
int SUB(int a, int b)
{
	return a - b;
}
int MUL(int a, int b)
{
	return a * b;
}
int DIV(int a, int b)
{
	if (b == 0)
	{
		printf("Error : 나눗셈 입력 오류!!!\n");
		printf("\t0으로 나눌수 없습니다.\n");
		exit(0);
	}
	return a / b;
}

int CAL(int a, int b, int(*funcPtr)(int, int))
{
	int res;

	res = funcPtr(a, b);

	return res;
}

int main()
{
	char op;
	int a, b, res;

	printf("수식 입력(예 : 10 + 20) : ");
	scanf("%d %c %d", &a, &op, &b);

	switch (op)
	{
	case '+': res = CAL(a, b, ADD); break;
	case ' -': res = CAL(a, b, SUB); break;
	case '*': res = CAL(a, b, MUL); break;
	case '/': res = CAL(a, b, DIV); break;
	default: printf("지원되지 않는 연산자!!!\n");
		return 0;
	}

	printf("수식 결과 : %d %c %d = %d\n", a, op, b, res);
	return 0;
}