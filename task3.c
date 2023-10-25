//    ^
//   ^^^
//  ^^^^^
// ^^^^^^^
//^^^^^^^^^

#include <stdio.h>

int main() {
    char sign = '^';
    int a = 1;
    int num;
    int e = 1;
    printf("Enter number\n");
    scanf("%d", &num);
    while (a <= num) {
        int b = num - a;
        int c = 0;
        int d = 0;
        while (c < b) {
            printf("%c", ' ');
            c++;
        } while(d < e) {
            printf ("%c", sign);
            d++;
        }
        e = e + 2;
        printf("\n");
        a++;
    }
    return 0;
}
