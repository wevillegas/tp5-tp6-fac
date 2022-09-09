#include<stdio.h>

// Escribir un programa que presente por pantalla los números del 1 al 20
int main () {
    int i, n;
    i = 1;
    n = 20;
    while (i <= n)
    {
        printf("%d \n", i);
        i = i + 1;
    }
    return 0;
}