#include <stdio.h>
/** \brief Recibe los numeros ingresados y los suma.
  * \param a Se carga el primer numero que ingreso el usuario.
  * \param b Se carga el segundo numero que ingreso el usuario.
  * \return Devuelve el resultado de la suma.
  */

float suma(float a,float b)
{
    float resultado;
    resultado= a + b;
    return resultado;
}

/** \brief Recibe los numeros ingresados y los resta.
  * \param a Se carga el primer numero que ingreso el usuario.
  * \param b Se carga el segundo numero que ingreso el usuario.
  * \return Devuelve el resultado de la resta.
  */

float resta(float a, float b)
{
    float resultado;
    resultado= a - b;
    return resultado;
}

/** \brief Recibe los numeros ingresados y los divide.
  * \param a Se carga el primer numero que ingreso el usuario.
  * \param b Se carga el segundo numero que ingreso el usuario.
  * \return Devuelve el resultado de la division.
  */

float division(float a, float b)
{
    float resultado;
    resultado = a/b;
    return resultado;
}

/** \brief Recibe los numeros ingresados y realiza el producto.
  * \param a Se carga el primer numero que ingreso el usuario.
  * \param b Se carga el segundo numero que ingreso el usuario.
  * \return Devuelve el resultado del producto.
  */

float producto(float a, float b)
{
    float resultado;
    resultado = a * b;
    return resultado;
}

/** \brief Recibe el primer numero ingresado y realiza el factorial.
  * \param a Se carga el primer numero que ingreso el usuario.
  * \return Devuelve el resultado del factorial.
  */

int factorial(float a)
{
    int fac;
    if(a==0)
    {
        return 1;
    }
    fac = a*factorial(a-1);

    return fac;
}

/** \brief Permite visualizar el menu de opciones, pide seleccionar una y valida que la opcion ingresada este dentro del rango.
  * \param a Se carga el primer numero que ingreso el usuario.
  * \param b Se carga el segundo numero que ingreso el usuario.
  * \param mensajeError Es el mensaje que se muestra si la opcion no se encuentra dentro del rango.
  * \param max Limite inferior del menu.
  * \param min Limite superior del menu.
  * \return Devuelve la opcion seleccionada.
  */

int ingreso(float a,float b,char mensajeError[],int max, int min )
{
    char *menu[90];
    int op;
    int aux;
    int retorno=-1;
    sprintf(menu,"1- Ingresar 1er operando (%.3f)\n2- Ingresar 2do operando (%.3f)\n3- Calcular la suma (A+B)\n4- Calcular la resta (A-B)\n5- Calcular la division (A/B)\n6- Calcular la multiplicacion (A*B)\n7- Calcular el factorial (A!)\n8- Calcular todas las operaciones\n9- Salir\n",a,b);
    puts(menu);
    aux=scanf("%d",&op);
    if(aux==1)
    {
        if(op<=9 && op>=1)
        {
            retorno=0;
        }
    }
    while(retorno != 0)
    {
        printf("%s", mensajeError);
        aux=scanf("%d",&op);
        fflush(stdin);
        if(aux==1)
        {
            if(op<=9 && op>=1)
            {
                retorno=0;
            }
        }
    }
    return op;
}

