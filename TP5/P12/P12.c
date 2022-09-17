#include<stdio.h>

// Ingresar un número expresado en el sistema binario, convertirlo al sistema decimal. Presentar ambos números en el centro de la pantalla.
int main (){
    int binario, resto, resultado, n;
    printf("Cuantos digitos tendra el numero binario? \n");
    scanf("%d", &n);
    int digito[n];
    printf("Introduce el numero en sistema BINARIO (RESPETE LA CANTIDAD DE CIFRAS, SINO EL RESULTADO SERÁ INCORRECTO\n");
    scanf("%d", &binario);
    printf("El numero en sistema BINARIO es: %d\n", binario);
    for (int i = 0; i < n; i++)
    {
        digito[i] = binario % 10;
        binario /= 10;
    }
    
    for (int i = (n - 1); i >= 0 ; i--)
    {
        resultado = (resto * 2) + digito[i];
        resto = resultado;
    }
    printf("El numero en sistema DECIMAL es: %d\n", resultado);
    return 0;
}