#include <stdio.h>

void concat (int*v1 , int*v2);

int main (void){

int v1[5]={2, 3, 7, 8, 10}, v2[5]={3, 6, 8, 10, 13};

concat (&v1, &v2);

}

void concat (int*v1 , int*v2){

int v3[10], i=0, j=0, aux,v4[10];

for (j=0;j<10;j++){
    for (i=0;i<5;i++){
        v3[j] = *(v1+i);
        j++;
        v3[j] = *(v2+i);
        j++;
    }
}
for(i=0; i<10; i++ ){
     for(j=i+1; j<10; j++)
     if (v3[i]>v3[j])
     { aux=v3[i];
     v3[i]=v3[j];
     v3[j]=aux; }
}
        j=0;
     for(i=0; i<10; i++){
     if (v3[i]!=v3[i+1])
     { v4[j]=v3[i];
        j++;
     }}


for (i=0;i<j;i++){
printf ("%d", v4[i]);
}
}
