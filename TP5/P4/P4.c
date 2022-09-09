#include<stdio.h>

// Se ingresan N valores numéricos. Se desea saber cuántos son positivos, cuántos negativos y cuantos iguales a cero.
int main (){
    int pos, neg, neu, c, n, x;
    pos = 0;
    neg = 0;
    neu = 0;
    c = 0;
    printf("Ingrese la cantidad de numeros que desea ingresar \n");
    scanf("%d", &n);
    while (c < n)
    {
        printf("Ingrese un numero\n");
        scanf("%d", &x);
        if (x == 0)
        {
            neu = neu + 1;
        } else if (x > 0)
        {
            pos = pos + 1;
        } else {
            neg = neg + 1;
        }
        c = c + 1;
    }
    printf("Cantidad de numeros positivos: %d\n", pos);
    printf("Cantidad de numeros negativos: %d\n", neg);
    printf("Cantidad de numeros neutros: %d\n", neu);
    return 0;
}