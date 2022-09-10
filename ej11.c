#include <stdio.h>

void concat (int*v1 , int*v2, int tt, int t1, int t2);
void diferencia (int*v1 , int*v2, int t1, int t2);
void interseccion (int*v1 , int*v2, int t1, int t2);

int main (void){

int v1[100]={'\0'}, v2[100]={'\0'}, t1=0, t2=0, tt=0, i=0;

printf ("ingrese el tamaño de la primer variable\n");
scanf ("%d", &t1);
fflush (stdin);

for (i=0; i<t1;i++){
    printf ("ingrese el numero %d \n", i+1);
    scanf ("%d", &v1[i]);
    fflush (stdin);}

printf ("ingrese el tamaño de la primer segunda\n");
scanf ("%d", &t2);
fflush (stdin);

for (i=0; i<t1;i++){
    printf ("ingrese el numero %d\n", i+1);
    scanf ("%d", &v2[i]);
    fflush (stdin);}

tt = t1 + t2;

concat (&v1, &v2, tt, t1, t2);

diferencia (&v1 , &v2, t1, t2);

interseccion (&v1 , &v2, t1, t2);

}

void concat (int*v1 , int*v2, int tt, int t1, int t2){

int v3[tt], i=0, j=0;

for (j=0;j<tt;j++){
    for (i=0;i<t1;i++){
        v3[j] = *(v1+i);
        j++;
    }
    for (i=0;i<t2;i++){
        v3[j] = *(v2+i);
        j++;
    }
}
for (j=0;j<tt;j++){
printf ("%d", v3[j]);
}
}

void diferencia (int*v1 , int*v2, int t1, int t2){

int v3[t1], i=0, j=0,k=0,flag=0;

for(i=0;i<t1;i++){
for (j=0;j<t2;j++){
    if (*(v1+i)== *(v2+j))
        flag=1;
        }
        if(flag==0){
        v3[k] = *(v1+i);
        k++;}
        flag=0;
        }

for (j=0;j<k;j++){
printf ("%d", v3[j]);
}
}

void interseccion (int*v1 , int*v2, int t1, int t2){

int v3[t1], i=0, j=0,k=0,flag=0;

for(i=0;i<t1;i++){
for (j=0;j<t2;j++){
    if (*(v1+i)== *(v2+j)){
        v3[k] = *(v1+i);
        k++;}
        }

for (j=0;j<k;j++){
printf ("%d", v3[j]);
}
}
}
