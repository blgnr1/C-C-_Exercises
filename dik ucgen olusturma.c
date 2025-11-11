/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main () {
    
    int n;
    int i,j;
    
    printf("Basamak sayisi girin :");
    scanf ("%d",&n);
    
    for (i=0;i<n;i++) {
        for (j=0;j<i+1;j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}