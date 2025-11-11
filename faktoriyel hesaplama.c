/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int sayi;
    int i;
    int faktoriyel=1;

printf("Bir tam sayi giriniz :");
scanf("%d",&sayi);
if (sayi<0) {
    printf("Pozitif bir tam sayi giriniz");
    return 0;
}
for (i=1; i<=sayi; i++) {
    faktoriyel = faktoriyel*i;
}
printf("%d",faktoriyel);
    return 0;
}