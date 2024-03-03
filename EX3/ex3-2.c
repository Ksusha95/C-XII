#include <stdio.h>

#include "ex3.h"

int set_mode(int value, int exvalue) {
	
	int mode = 0;
	int premode;
	
	if(value == AMERICAN_MODE || value == METRIC_MODE)
		mode = value;
		
	else {
		
		mode = exvalue;
		printf("\nОставлено предыдущее значение: %d\n", mode);
	}
	
	return mode;
}

double get_info(int mode) {
	
	double distance;
	double fuelCons;
	double volume;
	
	if (mode == METRIC_MODE) {
		
		printf("\nВведите пройденное расстояние в километрах: ");
		scanf("%lf", &distance);
		
		printf("Введите объем израсходованного топлива в литрах: ");
		scanf("%lf", &volume);
		
		fuelCons = (volume / distance) * 100;
	}
	
	if (mode == AMERICAN_MODE) {
		
		printf("\nВведите пройденное расстояние в милях: ");
		scanf("%lf", &distance);
		
		printf("Введите объем израсходованного топлива в галлонах: ");
		scanf("%lf", &volume);
		
		fuelCons = distance / volume;
	}
	
	return fuelCons;
}

void show_info(int mode, double fuelCons) {
	
	if (mode == METRIC_MODE)
		printf("\nРасход топлива составляет %.2lf литров на 100 км.\n", fuelCons);
		
	else if (mode == AMERICAN_MODE)
		printf("\nРасход топлива составляет %.2lf мили на на галлон.\n", fuelCons);
}
