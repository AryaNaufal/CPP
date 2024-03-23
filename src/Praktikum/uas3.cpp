#include<stdio.h>
main(void){
int i,*p;
int A[5]={15,12,25,17,10};
p=A;
p=p+2;
printf("%i",*p);
}