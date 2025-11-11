/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int sayilar [5]={};
    int i;
    int max_sayi;
    
    printf("5 adet sayi giriniz \n");
    
    for (i=0;i<5;i++) {
        printf("Sayi giriniz :");
        scanf ("%d",&sayilar[i]);
        
        if (sayilar[i]>max_sayi) {
            max_sayi=sayilar[i];
        }
        
    }
    
    printf("En buyuk sayi %d",max_sayi);
    return 0;
}
