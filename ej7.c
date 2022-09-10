#include<stdio.h>

int main (void){

int v[3] = {10,20,30};
int *p;
p = v;

(*p)++;
 printf ("%d", *p);
*(p++);
 printf ("%d", *p);
*p++;
 printf ("%d", *p);
}
