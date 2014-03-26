#include <stdio.h>

void main()
{
float a, b, c, max;    //asemanatoare cu prima problema

printf("a="); scanf("%f", &a);
printf("b="); scanf("%f", &b);
printf("c="); scanf("%f", &c);

max = a;
if (b > max)
max = b;
if (c > max)
max = c;

printf("Cel mai mare dintre numere este %5.1f", max);
}
