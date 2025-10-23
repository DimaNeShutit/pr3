#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	int distance;
	float oil;
	float price;
	float total;
	puts("Ââåäèòå ðàññòîÿíèå â êì:");
	scanf_s("%d", &distance);
	puts("Ââåäèòå ðàñõîä òîïëèâà:");
	scanf_s("%f", &oil);
	puts("Ââåäèòå ñòîèìîñòü òîïëèâà çà 1ë:");
	scanf_s("%f", &price);
	total = oil/100*distance*price;
	printf("Ñòîèìîñòü ïîåçäêè ñîñòàâèò: %.2f ðóáëåé", total);
}
