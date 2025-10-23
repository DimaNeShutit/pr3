#include <stdio.h>
#include <locale.h>
void main() 
{
    float a, b;
    setlocale(LC_ALL, "RUS");
    printf("¬ведите число a: ");
    scanf("%f", &a);
    printf("¬ведите число b: ");
    scanf("%f", &b);
    printf("_______________________________\n");
    printf("| a * b    |   a+b   |   a-b  |\n");
    printf("-------------------------------\n");
    printf("| %.0f * %.0f    |   %.0f+%.0f   |   %.0f-%.0f  |\n", a, b, a, b, a, b);
    printf("-------------------------------\n");
    printf("| %5.0f    |%5.0f    | %4.0f   |\n", a * b, a + b, a - b);
    printf("-------------------------------\n");
}