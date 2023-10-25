#include <stdio.h>

int main() {

int a = 1;
int num;
int b = 1;

printf("Введите число:\n");
scanf("%d", &num);

while(a <= num) {
b = b * a;
a++;
}
printf("%d\n", b); 
return 0;
}
