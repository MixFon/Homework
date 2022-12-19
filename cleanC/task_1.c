#include <stdio.h>
#include <math.h>

/*
	Составить программу вычисления значений синуса по периоду (20 точек)
*/

int main(int argc, const char * argv[]) {
	double start = 0;
	double end = 0;
	printf("Введите начало периода в градусах: \n");
	scanf("%lf", &start);
	printf("Введите конец периода в градусах: \n");
	scanf("%lf", &end);
	printf("Период от %f до %f\n", start, end);
	for (double i = start; i < end; i++) {
		// Переводим в радианы и вычисляем значение sin
		double result = sin(M_PI * i / 180);
		printf("sin(%f) = %f\n", i, result);
	}
	return 0;
}
