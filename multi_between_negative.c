
#include "multi_between_negative.h"

int multi_between_negative (int a[], int indexFirst, int indexLast){
 int product = 1;
	 for (indexFirst; indexFirst < indexLast; indexFirst++){
	 product = product * a[indexFirst];
	  }
 return (product);
}
