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
    int sayi1;
    int sayi2;
    int i;
    int min;
    int ebob=1;
    long int ekok=1;
    
    cout<<"Sayilari giriniz:";
    cin>>sayi1>>sayi2;
    
    if (sayi1==sayi2) {
        cout<<"Ebob:"<<sayi1<<"  Ekok:"<<sayi1;
        return 0;
    }
    else if (sayi1<sayi2) {
        min=sayi1;
    }
    else min=sayi2;
    
    for(i=2;i<=min;i++) {
        if(sayi1%i==0 && sayi2%i==0) {
            ebob=i;
        }
    }
    ekok=sayi1*sayi2/ebob;
    cout<<"Ebob:"<<ebob<<" Ekok:"<<ekok;
    
    return 0;
}