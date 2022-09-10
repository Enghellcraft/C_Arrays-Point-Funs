#include<stdio.h>

int carga (int tam, int *num);

int main (void){

int tam, i=0, var=0;

printf ("ingrese el tamaño del vector: \n");
scanf ("%d", &tam);
fflush (stdin);

int num[100]={'\0'};

while (i < tam){
var = carga (tam, &num);
if (var==0){
    i++;
}
}
printf ("El vector ingresado es: ");
i=0;
while (i < tam){
    printf ("%d. ", num[i]);
    i++;
}
}
int carga (int tam, int *num){

int i, res;

printf ("ingrese una posicion: \n");
scanf ("%d", &i);
fflush (stdin);
if (*(num+i-1) == '\0'){
    printf ("ingrese un valor para la posicion %d: \n", i);
    scanf ("%d", &res);
    fflush (stdin);
    *(num + (i-1))= res;
    return (0);
    } else {
    printf ("\n posicion ocupada");
    return (1);}
}
