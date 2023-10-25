//Используя директиву #define, напишите именованную константу,
//возвращающую число секунд в году. Високосным годом – пренебречь.

#include<stdio.h>
#define YEAR S

int main() {

int day = 365;
int hour = 24;
int min = 60;
int sec = 60;

int S = day * hour * min * sec;

printf("В году %d секунд", S);
return 0;
}


