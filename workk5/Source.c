#include <stdio.h>
#include <math.h>
#include <locale.h>

#define M_PI 3.14159265358979323846
#define _USE_MATH_DEFINES
#define k 7

//2

float var_a(float x)
{
	float a = pow(k + x, 3);
	return a;
}

float var_b(float x)
{
	float b = log10(fabs(k * x));
	return b;
}

float var_y(float x)
{
	float y = pow(var_b(x), 2) + sqrt(fabs(var_a(x)));
}

int main(void)
{
	setlocale(LC_ALL, "RUS");

	// 1

	float gr, result, x;
	float a, b, y;
	puts("��������� ���������� ������");
	puts("������� ������");
	scanf("%f", &gr);
	result = sin(gr * M_PI / 180);
	printf("��������� ����� %.1f ���� = %3f", gr, result);

	//2

	puts("\n������� x");
	scanf("%f", &x);

	a = var_a(x);
	b = var_b(x);
	y = var_y(x);
	printf("a = %.1f, b = %.1f, y = %.3f", a, b, y);

	//3

	int A, B, C;

	A = (int)a;
	B = (int)b;
	C = (int)y;

	printf("\n����� ����� �� �=%d, ����� ����� �� b=%d, ����� ����� �� y=%d\n", A, B, C);
	if (((A % 2 == 0) && (B % 2 != 0)) || ((A % 2 != 0) && (B % 2 == 0)))
	{
		puts("���� �� ����� � � � ������: 1\n");
	}
	else
	{
		puts(" ���� �� ����� � � � ������: 0\n");
	}
	if ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0))
	{
		puts("������ �� ����� �,�,� ������ 3: 1\n");
	}
	else
	{
		puts(" ������ �� ����� �,�,� ������ ����: 0\n");
	}

	return 0;
}