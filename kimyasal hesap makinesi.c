/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int deger;
    float P;
    float V;
    float n;
    float R;
    float T;
    printf("Bulmak istediginiz degeri secin \n P icin 1 \n V icin 2 \n n icin 3 \n R icin 4 \n ");
    scanf("%d",& deger);
    
    if (deger==1) {
        printf("V degeri girin:");
        scanf ("%f",&V);
        printf("n degeri girin:");
        scanf ("%f",&n);
        printf("R degeri girin:");
        scanf ("%f",&R);
        printf("T degeri girin:");
        scanf ("%f",&T);
        
        printf("P : %lf",n*R*T/V);
    }
        if (deger==2) {
        printf("P degeri girin:");
        scanf ("%f",&P);
        printf("n degeri girin:");
        scanf ("%f",&n);
        printf("R degeri girin:");
        scanf ("%f",&R);
        printf("T degeri girin:");
        scanf ("%f",&T);
        
        printf("V : %lf",n*R*T/P);
    }
        if (deger==3) {
        printf("P degeri girin:");
        scanf ("%f",&P);
        printf("V degeri girin:");
        scanf ("%f",&V);
        printf("R degeri girin:");
        scanf ("%f",&R);
        printf("T degeri girin:");
        scanf ("%f",&T);
        
        printf("n : %lf",(P*V)/(R*T));
    }
        if (deger==4) {
        printf("P degeri girin:");
        scanf ("%f",&P);
        printf("V degeri girin:");
        scanf ("%f",&V);
        printf("n degeri girin:");
        scanf ("%f",&n);
        printf("T degeri girin:");
        scanf ("%f",&T);
        
        printf("R : %lf",(P*V)/(n*T));
    }
 return 0;       
}