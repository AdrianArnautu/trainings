#include <stdio.h>

void main()
{
float a, b, max;   //declar doua nr,si max, am pus float pentru ca nu e specificat ce fel de numere sunt.

printf("a="); scanf("%f", &a);  //citesc numerele 
printf("b="); scanf("%f", &b);

max = a;               // max=a, daca b este mai mare ca max, atunci max egal b
if (b>max)
max = b;

printf("Cel mai mare numar este %5.1f", max);  //afisarea rezultatului

}
