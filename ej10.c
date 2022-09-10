#include <stdio.h>

void concat (int*v1 , int*v2);

int main (void){

int v1[5]={2, 56, 7, 8, 30}, v2[5]={7, 80, 2, 4, 13};

concat (&v1, &v2);

}

void concat (int*v1 , int*v2){

int v3[10], i=0, j=0;

for (j=0;j<10;j++){
    for (i=0;i<5;i++){
        v3[j] = *(v1+i);
        j++;
        v3[j] = *(v2+i);
        j++;
    }
}
for (j=0;j<10;j++){
printf ("%d", v3[j]);
}
}
