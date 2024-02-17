#include <stdio.h>
#include <stdlib.h>
/*reset to 98
*/
void reset_to_98(int *n){
*n=98;
}
/* main - entry point
*return -always zero
*/
int main(){
int n=402;
printf("n = %d",n);
reset_to_98(&n);
printf("\nn = %d",n);
}
