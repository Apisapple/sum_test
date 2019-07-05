#include "sum.h"

int sum(int a){
	int r = 0;
	for(int i = 1; i <= a; i++) r += i;
	return r;
}
