
#include "multi_before_and_after_negative.h"

int multi_before_and_after_negative (int a[], int indexFirst, int indexLast, int amountOfElements){
	int product = 1;
	int i;
	for ( i = 0; i < amountOfElements; i++){
		if ( i == indexFirst){
			i = indexLast;
		}
	product = product * a[i];
	}
 return(product);
}
