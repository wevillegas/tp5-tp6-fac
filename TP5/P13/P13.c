#include <stdio.h>
#define N 100

// Ingresar un número, entero positivo, expresado en el sistema decimal, convertirlo al sistema binario. Presentar por pantalla el número en decimal y en binario.

int main(){
    int n, a[N];
    int i = 0;
    printf("Ingrese un numero en sistema DECIMAL \n");
    scanf("%d", &n);
    while (n > 0)
    {
        a[i] = n % 2;
        i = i + 1;
        n = n / 2;
    }
    for (i--; i >= 0; i--){
        printf("%d", a[i]);
    }
    return 0;
}