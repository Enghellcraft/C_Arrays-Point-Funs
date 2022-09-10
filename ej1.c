#include<stdio.h>

void ingr(int m, float *elem);
float op1 (float elem[], int m);
float op2 (float elem[], int m);
float op3 (float elem[], int m);
void op4 (float elem[], int m);
void op5 (float elem[], int m);
void op6 (float elem[], int m);
void op7 (float elem[], int m);
void op8 (float elem[], int m);
void op9 (float elem[], int m);
void op10 (float elem[], int m);
void op11 (float elem[], int m);

int main (void){

int i, m, o;
float elem[100], suma, min, max, prom;
printf ("ingrese la cantidad de numeros a ingresar\n");
scanf ("%d", &m);
fflush (stdin);



ingr (m,&elem);

printf ("MENU:\n");
printf ("Opcion 1: Suma de todos los elementos\n");
printf ("Opcion 2: Minimo de todos los elementos\n");
printf ("Opcion 3: Promedio de todos los elementos\n");
printf ("Opcion 4: Valores de todos los elementos que superan el promedio\n");
printf ("Opcion 5: Valores que son multiplos del ultimo numero\n");
printf ("Opcion 6: Maximo de todos los elementos, cantidad de apariciones y orden de ingreso\n");
printf ("Opcion 7: Pares de todos los elementos\n");
printf ("Opcion 8: Ubicaciones impares de todos los elementos\n");
printf ("Opcion 9: Encuentre un numero de todos los elementos, cantidad de apariciones y por cuantos numeros anteriores se paso para llegar a el\n");
printf ("Opcion 10: Numero de apariciones de un elemento\n");
printf ("Opcion 11: Inversion del orden todos los elementos\n");
scanf ("%d", &o);
fflush (stdin);

switch (o){
    case 1:
            suma = op1 (elem, m);
            printf ("La suma de todos los numeros es = %.2f", suma);
            break;
    case 2:
            min = op2 (elem, m);
            printf ("El minimo de todos los numeros es = %.2f", min);
            break;
    case 3:
            prom = op3 (elem, m);
            printf ("El promedio de todos los numeros es = %.2f", prom);
            break;
    case 4:
            op4 (elem, m);
            break;
    case 5:
            op5 (elem, m);
            break;
    case 6:
            op6 (elem, m);
            break;
    case 7:
            op7 (elem, m);
            break;
    case 8:
            op8 (elem, m);
            break;
    case 9:
            op9 ( elem, m);
            break;
    case 10:
            op10 ( elem, m);
            break;
    case 11:
            op11 ( elem,  m);
            break;
}
}

void ingr (int m,float *elem){
int i=0;
//float elem[m];
for (i=0; i<m; i++){
    printf ("ingrese el numero %d: \n", i+1);
    scanf ("%f", (elem+i));
    fflush (stdin);
    }
}
float op1 (float elem[], int m){
    int i=0;
    float suma=0;
    for (i=0; i<m; i++){
        suma = suma + elem[i];
    }
    return (suma);
}
float op2 (float elem[], int m){
    int i=0;
    float min;
    min = elem[0];
    for (i=0; i<m; i++){
        if (min > elem[i]){
            min = elem[i];
        }
    }
    return (min);
}
float op3 (float elem[], int m){
    float suma, prom;
    suma = op1 (elem, m);
    prom = suma / m;
    return (prom);
}
void op4 (float elem[], int m){
    int i=0;
    float prom;
    prom = op3 (elem, m);
    for (i=0; i<m; i++){
        if (elem[i]>prom){
            printf ("El valor %.2f, es mayor al promedio\n", elem[i]);
        }
}
}
void op5 (float elem[], int m){
    int i=0;
    for (i=0; i<m-1; i++){
        if (((int)elem[i]%(int)elem[m-1])== 0){
            printf ("El valor %.2f, es multiplo de %.2f\n", elem[i], elem[m-1]);
        }
    }
}
void op6 (float elem[], int m){
    int i=0, cont=0;
    float max;
    max = elem[0];
    for (i=0; i<m; i++){
        if (elem[i] > max){
            max = elem[i];
        }
    }
    printf ("El valor maximo es %.2f\n", max);
    for (i=0; i<m; i++){
        if (elem[i] == max){
            printf ("La posicion %d es maximo\n", i+1);
            cont++;
        }
    }
   printf ("En total hay %d, valores que cumplen con el maximo\n", cont);
}
void op7 (float elem[], int m){
    int i=0;
    for (i=0; i<m; i++){
        if (((int)elem[i]%2)== 0){
            printf ("El valor %.2f, es par\n", elem[i], elem[m]);
        }
    }
}
void op8 (float elem[], int m){
    int i=0;
    while ((i%2)!= 0){
        printf ("El valor %d es %.2f\n",i+1, elem[i]);
    }
}
void op9 (float elem[], int m){
    int i=0, cont=0;
    float busc;
    printf ("Que numero desea buscar\n");
    scanf ("%f", busc);
    fflush (stdin);
    for (i=0; i<m; i++){
        if (elem[i] == busc){
            printf ("El valor %.2f, esta en la posicion %d. Paso por %d valores previos\n", elem[i], i+1, cont);
            cont++;
        }
        }
}
void op10 (float elem[], int m){
    int i=0, cont=0;
    float busc;
    printf ("Que numero desea buscar\n");
    scanf ("%f", busc);
    fflush (stdin);
    for (i=0; i<m; i++){
        while (elem[i] == busc){
            cont++;
        }
    printf ("El valor %.2f, aparece %d veces\n", busc, cont);
}
}
void op11 (float elem[], int m){
    int i=0, j=m-1;
    printf ("los valores invertidos son: \n");
    for (i=0; i<m; i++){
        printf ("%.2f", elem[j]);
        j--;
    }
}
