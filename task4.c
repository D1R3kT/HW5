// Напишите макрос MIN - поиск минимального значения из 2-х чисел.


#include <stdio.h>
#define min(a, b) (((a) < (b)) ? (a) : (b))

int main() {

int a, b;

printf("Enter first number:\n");
scanf("%d", &a);
printf("Enter second number:\n");
scanf("%d", &b);
printf("MIN=%d",min(a,b));
return 0;
}
