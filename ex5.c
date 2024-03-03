/** Н а п и ш и т е программу, которая генерирует список из 100 с л у ч а й н ы х чисел в
диапазоне от 1 до 10, о т с о р т и р о в а н н ы й по убыванию. ( М о ж е т е приспособить
к типу int алгоритм сортировки из главы 11, только в этом случае сортируйте
сами числа.) */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

void init(int *arr);
void sorting(int *arr);
void print(int *arr);

int main(void) {
	
	srand(time(NULL));
	
	int arr[SIZE];
	
	printf("\nInit...  ");
	init(arr);
	print(arr);
	
	printf("\n\nSorting...  ");
	sorting(arr);
	print(arr);
	
	return 0;
}

void init(int *arr) {
	
	for(int i = 0; i < SIZE; i++)
		*(arr + i) = rand() % 10 + 1;
}


void sorting(int *arr) {
	 
	int temp;
	
	for(int current = 0; current < SIZE-1; current++) {
		
		for (int next = current + 1; next < SIZE; next++) {
		
			if (*(arr + current) < *(arr + next)) {
				
				temp = *(arr + current);
				*(arr + current) = *(arr + next);
				*(arr + next) = temp;
			}
		}
	}
}

void print(int *arr) {
	
	for(int i = 0; i < SIZE; i++)
		printf("%d ", *(arr + i));
}
