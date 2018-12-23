
#include "index_first_negative.h"

int index_first_negative (int a[], int amountOfElements){
		int index;
    for(index = 0; index < amountOfElements; index++){
		if (a[index] < 0){
			return (index);
	    }
	}
}
