#include <stdio.h>

int main() {
	//declar doua nr,si max, am pus float pentru ca nu e specificat ce fel de numere sunt.
	float a, b, max;

	// citesc numerele
	printf("a = "); scanf("%f", &a);
	printf("b = "); scanf("%f", &b);

	// max=a, daca b este mai mare ca max, atunci max egal b
	max = a;

	if (b > max) {
		max = b;
	}

	printf("Cel mai mare numar este %5.1f", max);  //afisarea rezultatului

	return 0;
}
