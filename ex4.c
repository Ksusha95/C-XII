/** Н а п и ш и т е и протестируйте в ц и к л е ф у н к ц и ю , которая возвращает количест­
во ее вызовов. */


#include <stdio.h>

void function(void);

int funcCalls = 0;

int main(void) {
	
	int calls;
	
	scanf("%d", &calls);
	
	while(calls != -1) {
	
		for(int i = 1; i <= calls; i++)
			function();
	
		printf("\nCalls = %d, Function's calls = %d\n\n", calls, funcCalls);
	
		scanf("%d", &calls);
	}
	
	return 0;
	
}

void function(void) {
	
	funcCalls++;
}
