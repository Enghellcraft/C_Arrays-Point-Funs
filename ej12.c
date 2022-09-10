#include <stdio.h>

int minima (int *temp);
int diam (int *temp);

int main (void){

int temp[5], i=0, min, dia;


for (i=0;i<5;i++){
    printf ("ingrese la temp del dia %d\n", i+1);
    scanf ("%d", &temp[i]);
    fflush (stdin);
}

min = minima (&temp);
dia = diam (&temp);

printf ("La Temperatura Minima fue: %d, en el dia %d\n", min, dia);
}

int minima (int *temp){
int i=0, min;
min = *temp;
while (i<5){
    if (*(temp+i)<min){
        min = *(temp+i);
    }
    i++;
}
return (min);
}
int diam (int *temp){
int i=0, min, dia=1;
min = *temp;
while (i<5){
    if (*(temp+i)<min){
        dia = i+1;
        printf("%d", dia);
    }
    i++;
}
return (dia);
}
