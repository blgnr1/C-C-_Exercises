/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    
    int i;
    int sayi;
    int toplam=0;
    
    cout<<"Bir sayi girisi yapiniz";
    cin>>sayi;
    
    for (i=1;i<sayi;i++) {
        if (sayi%i==0) {
            toplam+=i;
        }
    }
    
    if (toplam==sayi) {
        cout<<"Bu sayi bir mukemmel sayidir";
    }
    else cout<<"Bu sayi bir mukemmel sayi degildir";
    
    

    return 0;
}