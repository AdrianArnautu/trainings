#include <stdio.h>

void main()
{
int nr;                        //Sper ca e buna, mie mi-a mers.

printf("nr="); scanf("%d", &nr);

if (nr == 0)
printf("Numarul este nul");
else if (nr > 0)
printf("Numarul este pozitiv");
else
printf("Numarul este negativ");
}
