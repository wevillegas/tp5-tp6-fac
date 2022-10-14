#include<stdio.h>
#include <math.h>

// Un pobre le dijo a un rico: " cada día le pagaré $100. A cambio, Ud. me dará el primer día $1, el segundo $2, el tercero $4, el cuarto $8, es decir cada día el doble del anterior, y así hasta terminar el mes de 30 días". Calcular:
// a) las cantidades entregadas por el rico y por el pobre, 
// b) a partir de qué día el rico le dio más dinero al pobre, si es que esto ocurrió
    int main(void)
{
    long pobre = 0, rico = 0;
    int i, dia;
    for (i = 1; i <= 30; i++)
    {
        rico += 100;
        pobre += pow(2, i - 1);
    }
    for (i = 1; i <= 30; i++)
    {
        if ((pow(2, i - 1)) > 100)
        {
            dia = i;
            break;
        }
    }

    printf("\nAl final de los 30 dias, el pobre habra entregado $%li y el rico habra entregado $%li\nEl rico empeza a darle más dinero al pobre a partir del dia %i", pobre, rico, dia);
    return 0;
}