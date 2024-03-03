/** Н а п и ш и т е программу, которая ведет себя подобно м о д и ф и к а ц и и листинга 12.13,
которая обсуждалась после представления вывода из программы, показанной в
листинге 12.13. То есть прог р а м м а д о л ж н а давать вывод следующего вида:
Введите количество бросаний или q для завершения: 18
Сколько граней и сколько костей? б 3
Имеем 18 бросаний 3 костей с 6 гранями.
12 10
6
9
8 14
8 15
9 14 12 17 11
7 10
13
8 14
Введите количество бросаний или q для завершения: q */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static int rollem(int sides);
int roll_n_dice (int dice, int sides);


int roll_count = 0;


int main (void) {

	int dice, roll;
	int sides, status;
	
	srand((unsigned int) time(NULL)); /* рандомизация начального числа */
	
	
	printf("Введите количество граней кости или 0 для завершения программы.\n");
	
	while (scanf("%d", &sides) == 1 && sides > 0) {
		
		printf ("Сколько костей? ");

		if ((status = scanf("%d", &dice)) != 1) {
			
			if (status == EOF)
				break;

			else {
				
				printf("Вы должны ввести целое число.");
				printf(" Давайте начнем сначала.\n");
				
				while (getchar() != '\n')
					continue;

				printf("Сколько граней? Для прекращения введите 0.\n");
				continue;

			}
		}
		
		roll = roll_n_dice(dice, sides);

		printf("Вы бросали %d раз(а), используя %d кости с %d гранями.\n", roll, dice, sides);

		printf("Сколько граней? Для прекращения введите 0.\n");
	}
		
		printf("Функция rollem() была вызвана %d раз(а).\n", roll_count);
		
		printf("Пусть удача не покидает вас!\n");
		
		return 0;
}
	
	
static int rollem(int sides) {
	
	int roll;
	roll = rand() % sides + 1;
	++roll_count;

	return roll;
}


int roll_n_dice (int dice, int sides) {
	
	int d;
	int total = 0;

	if (sides < 2) {

		printf("Tpeбyютcя, по меньшей мере, 2 грани.\n");
		return -2 ;
	}
	
	if (dice < 1) {
		
		printf("Tpeбyeтcя, по меньшей мере, 1 кость.\n");
		return -1;
	}
	
	for (d = 0; d < dice; d++)
		total += rollem(sides) ;

	return total;
}

