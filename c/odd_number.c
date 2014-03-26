#include <stdio.h>

void main()
{
int nr; //aici trebuie pus doar int? ca la float dadea eroare.

printf("nr="); scanf("%d", &nr);

if (nr % 2 == 0)  //Aici m-am incurcat putin, de ce e mod 2 si nu mod 10?
printf("Numarul este par");
else
printf("Numarul este impar");

}
