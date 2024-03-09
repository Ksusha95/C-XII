/**  П е р е п и ш и т е прогр а м м у из листинга 12.4 так, ч т о б ы в ней не использовались
глобальные переменные. */



#include <stdio.h>

void critic(int *units);

int main (void) {
	
	int units = 0;

	printf ("Сколько фунтов весит маленький бочонок масла?\n");
	scanf("%d", &units);

	while (units != 56)
		critic(&units);

	printf("Вы знали это!\n");

	return 0;
}

void critic (int *units) {
	
	printf("Вам не повезло. Попробуйте еще раз.\n");
	scanf("%d", units);
}
