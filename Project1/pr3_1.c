#include <stdio.h>
#include <locale.h>
void main() 
{
    setlocale(LC_ALL, "RUS");
    int num1, num2;
    puts("������� �����");
    scanf("%d", &num1);
    printf("������� ����� %d\n", num1);
    puts("������� ������ �����");
    scanf("%d", &num2);
    printf("������� ����� %d\n", num2);
    printf("�����: %d\n", num1 + num2);
    printf("��������: %d\n", num1 - num2);
    printf("������������: %d\n", num1 * num2);
    printf("�������: %d\n", num1 / num2);
    printf("������� �� �������: %d\n", num1 % num2);
}