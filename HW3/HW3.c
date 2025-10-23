#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	int distance;
	float oil;
	float price;
	puts("Введите расстояние в км:");
	scanf_s("%d", &distance);
	puts("Введите расход топлива:");
	scanf_s("%f", &oil);
	puts("Введите стоимость топлива за 1л:");
	scanf_s("%f", &price);
	printf("Стоимость поездки составит: %.2f рублей", oil/100*distance*price);
}