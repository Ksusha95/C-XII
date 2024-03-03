#include <stdio.h>

#include "ex2.h"

void set_mode(int value) {
	
	extern int mode; //статическая с внутр.связыванием в ОВ файл
	
	if(value == AMERICAN_MODE || value == METRIC_MODE)
		mode = value;
		
	else printf("\nОставлено предыдущее значение: %d\n", mode);
}

void get_info(void) {
	
	extern int mode;
	extern double distance;
	extern double fuelCons;
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
	
	
}

void show_info(void) {
	
	if (mode == METRIC_MODE)
		printf("\nРасход топлива составляет %.2lf литров на 100 км.\n", fuelCons);
		
	else if (mode == AMERICAN_MODE)
		printf("\nРасход топлива составляет %.2lf мили на на галлон.\n", fuelCons);
}
