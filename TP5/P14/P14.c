#include<stdio.h>

// Ingresar dos números de cuatro dígitos expresados en el sistema binario,
// presentar por pantalla ambos números y su suma

int main(){

   long int binario1,binario2;
   int i=0,re = 0,sum[20];

   printf("Ingrese el primer  binario: ");
   scanf("%ld",&binario1);
   printf("Ingrese el segundo binario: ");
   scanf("%ld",&binario2);

   while(binario1!=0||binario2!=0){
        sum[i++] =  (binario1 %10 + binario2 %10 + re ) % 2;
        re = (binario1 %10 + binario2 %10 + re ) / 2;
        binario1 = binario1/10;
        binario2 = binario2/10;
   }

   if(re!=0)
        sum[i++] = re;

   --i;
   printf("El resultado de la suma es: ");
   while(i>=0)
        printf("%d",sum[i--]);

  return 0;
}