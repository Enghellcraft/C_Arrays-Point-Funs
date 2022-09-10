#include<stdio.h>

int buscador (int *v, int num);

int main (void){

int i=0, v[5]={0,1,2,3,4}, num, pos;

printf ("ingrese el numero a buscar: \n");
scanf ("%d", &num);
fflush (stdin);

pos = buscador (v, num);

if (pos != NULL){
    printf ("Su posiscion es %d", pos+1);
    }else{
        printf ("No se encontro\n");
        printf ("ingrese la posicion para ingresarlo");
        scanf ("%d", &pos);
        fflush (stdin);
        v[pos] = num;
        printf ("el numero %d se encuentra en la posicion %d", pos, v[pos]);
        }
}

int buscador (int *v, int num){

int i=0, pos=NULL;

for (i=0;i<5;i++){
    if (num == *(v+i)){
        pos = i;
    }
}
return (pos);
}
