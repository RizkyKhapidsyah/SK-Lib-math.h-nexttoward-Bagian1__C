#include <stdio.h>      /* printf */
#include <math.h>       /* nexttoward */
#include <conio.h>

/*
	Source by CPlusPlus
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	printf("nilai representable pertama lebih besar dari nol : %e\n", nexttoward(0.0, 1.0L));
	printf("nilai representable pertama kurang dari nol : %e\n", nexttoward(0.0, -1.0L));

	_getch();
	return 0;
}