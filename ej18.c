#include<stdio.h>

int main (void){

int array[] = {1,2,3,4,5,6};
int *puntero, x;

puntero = array;

puntero++;

*puntero = *puntero + 6;
printf ("%d, %d, %d, %d, %d, %d, %d, %d\n", array[0], array[1], array[2], array[3], array[4], array[5], *puntero, x);
puntero = puntero + 3;
printf ("%d, %d, %d, %d, %d, %d, %d, %d\n", array[0], array[1], array[2], array[3], array[4], array[5], *puntero, x);
puntero = puntero-puntero[-2];
printf ("%d, %d, %d, %d, %d, %d, %d, %d\n", array[0], array[1], array[2], array[3], array[4], array[5], *puntero, x);
x = puntero - array;
printf ("%d, %d, %d, %d, %d, %d, %d, %d\n", array[0], array[1], array[2], array[3], array[4], array[5], *puntero, x);
}
