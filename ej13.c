#include <stdio.h>

int main (void){

int B[] = {3,4,1,2,7,12,-4};
float f = 4.234, *ptf;

*(B+3) = *B + 15;
ptf = &f;
*B = (int)(*ptf);
f = *ptf + 20;
*(B + 5) = (int)(*ptf); // que emite por pantalla B[], f, ptf?

printf ("F es %f, PTF es %f, B es %d %d %d %d %d %d %d", f, *ptf, B[0], B[1], B[2], B[3], B[4], B[5], B[6]);


}
