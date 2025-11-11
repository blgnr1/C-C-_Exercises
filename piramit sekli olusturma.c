/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main() {
    int satir_sayisi, bosluk, i, j;
    
    printf("Bir sayi giriniz: ");
    scanf("%d", &satirSayisi);

    for(i = 1; i <= satirSayisi; i++) {
        for(bosluk = 1; bosluk <= satirSayisi - i; bosluk++) {
            printf(" ");
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}