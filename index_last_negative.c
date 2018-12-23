#include "index_last_negative.h"

int index_last_negative (int a[], int amountOfElements){
	for (int index = --amountOfElements; index <= amountOfElements; index--){
		if (a[index] < 0){
			return (index);
	    }
    }
}
