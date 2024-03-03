/** Н а п и ш и т е программу, которая генерирует 1000 случайных чисел в диапазоне от
1 до 1О. Н е сохраняйте и не выводите эти числа, а выводите л и ш ь то, сколько раз
генериро^шось каждое число. П р о г р а м м а д о л ж ы делаТь это для 10 разных началь­
н ы х значений. П оявляются ли числа в одинаковых количествах? М о ж е т е исполь­
зовать функ ц и и из этой главы или ф у н к ц и и rand () и sra n d () из ^ANSI С, которые
следуют тому ж е формату, что и рассмотренные здесь. Э т о один из способов иссле­
дования недетерминированности конкретного генератора случайных чисел. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

#define START 1
#define END 10

void init(int *arr);

void printNumbers(int *arr);
int sumEveryNumber(int number, int *arr);

int main(void) {
	
	srand(time(NULL));
	
	int arr[SIZE];
	
	printf("\nInit...  \n\n");
	init(arr);
	
	printNumbers(arr);
	
	return 0;
}

void init(int *arr) {
	
	for(int i = 0; i < SIZE; i++)
		*(arr + i) = rand() % 10 + 1;
}


void printNumbers(int *arr) {
	
	for(int i = START; i <= END; i++) {
		
		printf("%d: %d\n", i, sumEveryNumber(i, arr));
	}
}

int sumEveryNumber(int number, int *arr) {
	
	int sum = 0;
	
	for(int i = 0; i < SIZE; i++) {
		
		if(*(arr + i) == number)
			sum++;
	}
	
	return sum;
}
