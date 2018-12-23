
#include "index_last_negative.h"


int index_last_negative (int a[], int amountOfElements){
	int index;
	for (index = --amountOfElements; index <= amountOfElements; index--){
		if (a[index] < 0){
			return (index);
	    }
    }
}
