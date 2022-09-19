#include "main.h" 
 /** 
  * swap_int - swaps value 
  * @a: params 
  * @b: params 
  */ 
  
 void swap_int(int *a, int *b) 
 { int a = 30;
int b = 40;
*a = &b;
*b = &a;
printf ("%d",*a);
printf("%d",*b);
 }
