#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float x=0;
    float y=0;
    float resultado;
    int resultadoFac;
    float aux;


    do
    {
    opcion = ingreso(x,y,"error ingrese un numero entre 1 y 9 inclusive: ", 9, 1);

        switch(opcion)
        {
            case 1:
                printf("Ingrese primer numero: ");
                scanf("%f",&x);
                break;
            case 2:
                printf("Ingrese segundo numero: ");
                scanf("%f",&y);
                break;
            case 3:
                resultado = suma(x,y);
                printf("El resultado de la suma es: %.3f\n\n",resultado);
                break;
            case 4:
                resultado = resta(x,y);
                printf("El resultado de la resta es: %.3f\n\n",resultado);
                break;
            case 5:
                while(y==0)
                {
                    printf("Error ingrese nuevamente el segundo numero: ");
                    scanf("%f",&y);
                }
                resultado = division(x,y);
                printf("El resultado de la division es: %.3f\n\n",resultado);
                break;
            case 6:
                resultado = producto(x,y);
                printf("El resultado del producto es: %.3f\n\n",resultado);
                break;
            case 7:
                aux = x-(int)x;
                if(aux !=0)
                {
                    printf("No se puede realizar el factorial de %.3f\n\n",x);
                }
                else
                {
                    resultadoFac = factorial(x);
                    printf("El factorial del primer numero es: %d\n\n",resultadoFac);
                }
                break;
            case 8:
                resultado = suma(x,y);
                printf("El resultado de la suma es: %.3f\n",resultado);
                resultado = resta(x,y);
                printf("El resultado de la resta es: %.3f\n",resultado);
                if(y==0)
                {
                   printf("No se puede realizar la division\n");
                }
                else
                {
                    resultado = division(x,y);
                    printf("El resultado de la division es: %.3f\n",resultado);
                }
                resultado = producto(x,y);
                printf("El resultado del producto es: %.3f\n",resultado);
                aux = x-(int)x;
                if(aux !=0)
                {
                    printf("No se puede realizar el factorial de %.3f\n\n",x);
                }
                else
                {
                resultadoFac = factorial(x);
                printf("El factorial del primer numero es: %d\n\n",resultadoFac);
                }
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }while(seguir=='s');
    return 0;
}

