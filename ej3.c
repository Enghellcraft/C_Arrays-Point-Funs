#include<stdio.h>

int main (void){
int v[5];
int *p;
//agreg0
int i;

p = &v[0];
*p = 1;
*(p+1) = 2;
*(p+2) = 3;
//completo
*(p+3) = 4;
*(p+4) = 5;

//imprimo
for (i=0; i<5; i++){
    printf ("La direccion %d, tiene el valor %d\n", p+i,*(p+i));
}
}
