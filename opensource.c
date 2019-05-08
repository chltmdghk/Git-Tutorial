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
		printf("Error : ������ �Է� ����!!!\n");
		printf("\t0���� ������ �����ϴ�.\n");
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

	printf("���� �Է�(�� : 10 + 20) : ");
	scanf("%d %c %d", &a, &op, &b);

	switch (op)
	{
	case '+': res = CAL(a, b, ADD); break;
	case ' -': res = CAL(a, b, SUB); break;
	case '*': res = CAL(a, b, MUL); break;
	case '/': res = CAL(a, b, DIV); break;
	default: printf("�������� �ʴ� ������!!!\n");
		return 0;
	}

	printf("���� ��� : %d %c %d = %d\n", a, op, b, res);
	return 0;
}