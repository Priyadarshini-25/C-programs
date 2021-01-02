#include<stdio.h>
typedef struct complex{
float real;
float imag;
}complex;

complex add(complex n1,complex n2);
 int main(){
 complex n1,n2,res;
 printf("for 1st complex no.,enter real and imaginary parts\n");
 scanf("%f%f",&n1.real,&n1.imag);
 printf("for 2st complex no.,enter real and imaginary parts\n");
 scanf("%f%f",&n2.real,&n2.imag);
 res=add(n1,n2);
 printf("sum= %f+%fi",res.real,res.imag);
 }
 
 complex add(complex n1,complex n2){
 complex temp;
 temp.real=n1.real+n2.real;
 temp.imag=n1.imag+n2.imag;
 return(temp);
 }
 
 
