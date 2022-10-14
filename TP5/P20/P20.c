#include<stdio.h>

// Ingresar un valor L encuentre el valor de N de manera tal que se cumpla que:
// 1 + 2 + 3 + 4 +. . .+ N <= L 
int main (){
    int n, l, s;
    n = 0;
    s = 1;
    printf("Ingrese el valor de L \n");
    scanf("%d", &l);
    while (s <= l)
    {
        n = n + s;
        s = s + 1;
    }
    printf("El valor de N es %d", n);
    return 0;
}