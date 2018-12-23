
#include <stdio.h>
#define SIZE_OF_ARRAY 20

int main(){
    int a[SIZE_OF_ARRAY];
	int check = 0;
	int i;
	int functioNumber = -1;
	int answer = -1;
	int indexFirst = -1;
	int indexLast = -1;
    int amountOfElements = 0;
	char c;
	for (int j = 0; j < SIZE_OF_ARRAY; j++){
		a[j] = 0;
	}
	scanf("%d ", &functioNumber);
	do{
		scanf("%d%c", &a[amountOfElements], &c);
			if (a[amountOfElements] < 0){
				check++;
			}
			amountOfElements++;
	} while (c!='\n');
	if (check == 0){
	printf("Нет отрицательных элементов\n");
	return 0;
	}
	switch (functioNumber){
		case 0:
			answer = index_first_negative(a, amountOfElements);
		    goto otv;
		case 1:
			answer = index_last_negative(a, amountOfElements);
            goto otv;
		case 2:
			indexFirst = index_first_negative(a, amountOfElements);
            indexLast = index_last_negative (a, amountOfElements);
			answer = multi_between_negative(a, indexFirst, indexLast);
			goto otv;
		case 3:
			indexFirst = index_first_negative(a, amountOfElements);
			indexLast = index_last_negative (a, amountOfElements);
		    answer = multi_before_and_after_negative(a, indexFirst, indexLast, amountOfElements);
			goto otv;
		default :
			printf("Функции %d не существуе\n", functioNumber);
			return 0;
	}
	otv:
	   printf("%d\n", answer);
	return 0;
}
