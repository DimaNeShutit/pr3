#include <stdio.h>
#include <locale.h>
#define D_ENGLISH 2.54
#define D_SPANISH 2.32166

void main() 
{
    setlocale(LC_ALL, "RUS");
    int dym;
    float result;
    puts("¬ведите количество дюймов:");
    scanf("%d", &dym);
    result = D_ENGLISH * dym;
    printf("%d английских дюймов - это %.2f см\n", dym, result);
    result = D_SPANISH * dym;
    printf("%d испанских дюймов - это %.2f см\n", dym, result);
}