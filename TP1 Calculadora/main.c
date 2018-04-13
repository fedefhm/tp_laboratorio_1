#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int main()
{
  int opcion;
  float x,y;
  int flagMostrarMenu=0;
    do{
        if(flagMostrarMenu==0)//desplegar el menú sólo una vez.
        {
             menu();
             flagMostrarMenu++;
        }
        else
            {
                printf("Ingresa nueva opcion: ");
            }
        scanf("%d",&opcion);

        switch(opcion)
        {
          case 1: ///primer numero u operando
            x= numero1();
            printf("El primer operando es: %.3f\n\n", x);
            break;
          case 2: ///primer numero u operando
            y=numero2();
            printf("El segundo operando es: %.3f\n\n", y);
            break;
          case 3: ///suma
            printf("La suma es: %.3f\n\n", sumar(x,y));
            break;
          case 4: ///resta
            printf("La resta %.3f\n\n", restar(x,y));
            break;
          case 5: ///división
            if(y==0)
                {
                    printf("\nNo se puede dividir por cero\n");
                } else {
                        printf("La division es: %.3f\n\n", dividir(x,y));
                       }
            break;
          case 6: /// multiplicación
            printf("El producto es: %.3f\n\n", multiplicar(x,y));
            break;
          case 7: /// factorial
            printf("El factorial es: %li \n\n", factorial(x));
            break;
          case 8: /// todas las operaciones
            printf("\nResultados de las operaciones:\n\n");
            printf("La suma es: %.3f\n\n", sumar(x,y));
            printf("La resta %.3f\n\n", restar(x,y));
            if(y==0)
                {
                printf("No se puede dividir por cero\n");
                } else
                       {
                        printf("La division es: %.3f\n\n", dividir(x,y));
                       }
            printf("\nEl producto es: %.3f\n\n", multiplicar(x,y));
            printf("El factorial es: %li \n\n", factorial(x));
            break;
          case 9:
            break;
          default:
            printf("\nIntroduci una opcion valida...");
        }
  } while (opcion != 9);
    return 0;
}
