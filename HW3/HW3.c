#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	int distance;
	float oil;
	float price;
	puts("������� ���������� � ��:");
	scanf_s("%d", &distance);
	puts("������� ������ �������:");
	scanf_s("%f", &oil);
	puts("������� ��������� ������� �� 1�:");
	scanf_s("%f", &price);
	printf("��������� ������� ��������: %.2f ������", oil/100*distance*price);
}