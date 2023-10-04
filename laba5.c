#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

main() {
	hw();
}

task4() {
	setlocale(LC_CTYPE, "RUS");
	double a, x, y, z;
	puts("Введите значение переменной x:");
	scanf("%lf", &x);
	puts("Введите значение переменной y:");
    scanf("%lf", &y);
	puts("Введите значение переменной z:");
	scanf("%lf", &z);
	double res1 = pow(2, -x);
	double res2 = pow(x + pow((fabs(y)), 1. / 4), 1. / 2);
	double res3 = pow(exp(x - 1. / sin(z)), 1. / 3);
	a = res1 * res2 * res3;
	printf("Ответ: %.5lf", a);
}

int task2() {
	setlocale(LC_CTYPE, "RUS");
	printf("Мой вариант %d\n", 9 % 8 + 1);
	long double x;
	puts("Введите значения числа x:");
	scanf("%lf", &x);
	long double y;
	long double a;
	long double b;
	long double k = -4;
	a = log(fabs(-k * x));
	b = exp(2 * x) + a * x;
	y = x * pow(a, 3) + b * b;
	printf("Результат: %.1lf", y);


}

int task() {
	setlocale(LC_CTYPE, "RUS");
	int gr;
	scanf("%d", &gr);
	float s = gr * M_PI / 180;
	printf("Синус %d градусов равен %lf", gr, sin(s));
	

	
}

int hw() {
	setlocale(LC_CTYPE, "RUS");
	printf("Мой вариант %d\n", 9 % 33 + 1);
	long double x;
	long double y;
	long double z;
	puts("Введите значение переменной x: ");
	scanf("%lf", &x);
	puts("Введите значение переменной y: ");
	scanf("%lf", &y);
	puts("Введите значение переменной z: ");
	scanf("%lf", &z);
	long double a1 = pow(2, -x);
	long double a2 = pow(x + pow(fabs(y), 1. / 4), 1. / 2);
	long double a3 = pow(exp(x - 1 / sin(z)), 1. / 3);
	long double a = a1 * a2 * a3;
	printf("Результат: %.5lf", a);
}