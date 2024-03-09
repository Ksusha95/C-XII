/** З а в е р ш и т е программу, предоставив о п ределения ф у н к ц и й m a k e _ a r r a y ( ) и
show_array (). Ф у н ю ^ make_array () принимает два аргумента. П е р в ы й аргумент-
это количество элементов в массиве значений int, а второй аргумент — значе­
ние, которое д о л ж н о быть присвоено каждому элеменгу массива. Эта функция
использует ma l loc () для создания массива подходящего размера, присваивает
кажд о м у элеменгу заданное значение и возвращает указатель на массив. Функция
s h o w _ a r r a y () отображает с о д е р ж и м о е массива по восемь элементов в строке. */

// ре12-8.с
#include <stdio.h>
#include <stdlib.h>

int* make_array(int elem, int val);
void show_array(const int ar[], int n ) ;

int main(void) {

	int *pa;
	int size;
	int value;
	
	printf ("Введите количество элементов: ");

	while (scanf("%d", &size) == 1 && size > 0) {

	printf("Введите значение для инициализации: ");
	scanf("%d", &value);

	pa = make_array(size, value);
	
	if(pa) {
		
		show_array(pa, size);
		free(pa);
	}
	
	printf("Bвeдитe количество элементов (<1 для завершения): ");
	}

	printf("Программа завершена.\n");

	return 0;
} 


int* make_array(int elem, int val) {
	
	int *array;
	
	array = (int*)calloc(elem, sizeof(int));
	
	if (array == NULL) printf("Ошибка выделения памяти\n");
	
	else {
		
		for(int i = 0; i < elem; i++)
			*(array + i) = val;
	}
	
	return array;
}

void show_array(const int ar[], int n ) {
	
	for(int i = 0; i < n; i++) {
		
		if((i%8) == 0 && i != 0) printf("\n");
		
		printf("%d ", ar[i]);
	}
	
	printf("\n");
}
