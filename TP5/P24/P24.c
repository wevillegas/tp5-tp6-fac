#include<stdio.h>
#include<math.h>

// Dados 4 círculos concéntricos simulando un blanco para tiro, con centro en (0,0) y cuyos radios y puntajes son los siguientes:
// a) círculo 1 radio = 1 para r<=1 : 4 puntos 
// b) círculo 2 radio = 2 para r>1 y r<=2 : 3 puntos 
// c) círculo 3 radio = 3 para r>2 y r<=3: 2 puntos 
// d) círculo 4 radio=4 para r>3 y r<=4: 1 punto
// Si se ingresan las coordenadas de N puntos en el plano, presentar por pantalla el puntaje total obtenido por la posición de los puntos y su promedio

int main (){
    int n, pje, a, c, p, x, y, t;
    t = 0;
    pje = 0;
    a = 0;
    c = 0;
    p = 0;
    printf("cuantos tiros desea ingresar? \n");
    scanf("%d", &n);
    while (c < n)
    {
        printf("Ingrese el valor de X \n");
        scanf("%d", &x);
        printf("Ingrese el valor de Y \n");
        scanf("%d", &y);
        a = atan(y/x);
        t = tan(a);
        if (t < 1)
        {
            pje = pje + 4;
        } else {
            if (t < 2)
            {
                pje = pje + 3;
            } else {
                if (t < 3)
                {
                    pje = pje + 2;
                } else {
                    pje = pje + 1;
                }
                
            }
            
        }
        c = c + 1;
    }
    p = pje / n;
    printf("Puntaje: %d \n", pje);
    printf("Promedio: %d \n", p);
    return 0;
}