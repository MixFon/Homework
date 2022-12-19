#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
	Для одинаковых материальных точек с координатами (xi, yi), i = 1.5
	опреднлите точку, наиболее близкую к центру тяжести с пометкой наиболее
	близкой к центру тяжести.
*/

typedef struct	s_point {
	double x;
	double y;
} 				t_point;

int main(int argc, const char * argv[]) {
	int count = 0;
	printf("Введите количество точек: ");
	scanf("%d", &count);
	// Создаем массив точек
	t_point *points = (t_point *)malloc(sizeof(t_point) * count);
	for (int i = 0; i < count; i++) {
		printf("%d. Введите x: \n", i);
		scanf("%lf", &points[i].x);
		printf("%d. Введите y: \n", i);
		scanf("%lf", &points[i].y);
	}
	printf("Вы ввели точки:\n");
	for (int i = 0; i < count; i++) {
		printf("%d. x = %lf y = %lf\n", i, points[i].x, points[i].y);
	}
	printf("Находим координаты x, y центра тяжести\n");
	double summ_x = 0;
	double summ_y = 0;
	for (int i = 0; i < count; i++) {
		summ_x += points[i].x;
		summ_y += points[i].y;
	}
	double xc = summ_x / count;
	double yc = summ_y / count;
	printf("Координата x центра тяжести равна: %lf\n", xc);
	printf("Координата y центра тяжести равна: %lf\n", yc);
	printf("Находим точку близкую к центру тяжести\n");
	t_point *pointMin = NULL;
	double directMin = sqrt(pow(xc - points[0].x, 2) + pow(yc - points[0].y, 2));
	for (int i = 1; i < count; i++) {
		double temp = sqrt(pow(xc - points[i].x, 2) + pow(yc - points[i].y, 2));
		if (temp < directMin) {
			directMin = temp;
			pointMin = &points[i];
		}
	}
	printf("Точка с наименьшим расстояним к центру тяжести иммеет координаты:\n");
	if (pointMin != NULL) {
		printf("x = %lf, y = %lf\n", pointMin->x, pointMin->y);
	}
	free(points);
	return 0;
}
