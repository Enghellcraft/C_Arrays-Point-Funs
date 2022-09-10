#include<stdio.h>

int impares (int *v, int tam);

int main (void){

int tam, num[100], cimp, i=0;

printf ("ingrese tamano:\n");
scanf ("%d", &tam);
fflush (stdin);

while (i<tam){
    printf ("ingrese el valor %d: \n", i+1);
    scanf ("%d", &num[i]);
    fflush (stdin);
    i++;
}
cimp = impares (&num, tam);

printf ("la cantida de impares es: %d", cimp);
}
int impares (int *v, int tam){

int cimp=0, i=0;
while (i<tam){
    if ((*(v+i)%2)!=0){
        cimp=cimp+1;
    }
    i++;
}
return (cimp);
}
