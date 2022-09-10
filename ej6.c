#include<stdio.h>

double *max (double *v, int tam);
)
int main (void{

int tam=5,i=0;
double v[5]={'\0'}, *dimax;

while (i<5){
    printf ("ingrese el valor %d: \n", i+1);
    scanf ("%d", &v[i]);
    fflush (stdin);
    i++;
}

dimax = max (&v, tam);

printf ("El valor max es: %d\n", *dimax);

}

double *max (double *v, int tam){

double *maxim;
int i=0;

maxim = v;
while (i<tam){
    if (*maxim<*(v+i)){
        maxim =(v+i);
        printf ("maxim es:%d\n",*maxim);
    }
    i++;
}
return (maxim);
}

