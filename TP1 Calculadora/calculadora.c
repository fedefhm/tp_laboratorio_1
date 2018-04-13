#include <stdio.h>
#include <stdlib.h>

void menu()
 {
  printf ("Bienvenido a la calculadora\n");
  printf("Elegi entre las siguientes opciones:\n\n");
  printf ("1- Ingresar primer operando\n");
  printf ("2- Ingresar segundo operando\n");
  printf ("3- Sumar\n");
  printf ("4- Restar\n");
  printf ("5- Dividir\n");
  printf ("6- Multiplicar\n");
  printf ("7- Calcular el Factorial\n");
  printf ("8- Calcular todas las operaciones\n");
  printf ("9- Salir\n");
  printf ("Opcion: ");
}

/**
*\ brief Recibe el primer número u operando.
*\ return El valor ingresado.
*/
float numero1()
{
    float a;
    printf("\nIntroduci el primer numero: ");
    scanf("%f", &a);
    return a;
}

/**
*\ brief Recibe el segundo número u operando.
*\ return El valor ingresado.
*/
float numero2()
{
    float b;
    printf("\nIntroduci el segundo numero: ");
    scanf("%f", &b);
    return b;
}

/**
*\ brief Recibe dos números ingresados por el usuario y los suma.
*\ param Los números ingresados por el usuario.
*\ return El resultado de la suma entre los dos números ingresados.
*/

float sumar(float x, float y)
{
    float resultado;
    resultado = x + y;
    return resultado;
}

/**
*\ brief Recibe dos números ingresados por el usuario y los resta.
*\ param Los números ingresados por el usuario.
*\ return El resultado de la resta entre los dos números ingresados.
*/

float restar(float x, float y)
{
    float resultado;
    resultado = x - y;
    return resultado;
}
/**
*\ brief Recibe dos números ingresados por el usuario y los multiplica.
*\ param Los números ingresados por el usuario.
*\ return El resultado de la multiplica entre los dos números ingresados.
*/

float multiplicar(float x, float y)
{
    float resultado;
    resultado = x * y;
    return resultado;
}
/**
*\ brief Recibe dos números ingresados por el usuario y los divide.
*\ param Los números ingresados por el usuario.
*\ return El resultado de la división entre los dos números ingresados.
*\ IMPORTANTE: el segundo número a ingresar (divisor) NO PUEDE SER CERO.
*/

float dividir(float x, float y)
{
    float resultado;
    resultado= x/y;
    return resultado;
}

/**
*\ brief Recibe UN SÓLO número ingresado por el usuario y calcula su factorial.
*\ param El número ingresado por el usuario.
*\ return El resultado del cálculo del factorial del número ingresado.
*\ IMPORTANTE: Por definición:
                              * Factorial(0)=Factorial(1)= 1.
                              * No Existe factorial de números negativos.
                              * El máximo que puede obtenerse es el factorial de 30 (overflow de stack, pasando 30).
*/


long unsigned int factorial (float x)
{
    float resultado=0;
    if(x<0||x>32)
    {
        printf("No ingresar numeros negativos, ni mayores de 31 (overflow de stack)");
        printf("\nIntroduci un numero valido: ");
        scanf("%f", &x);
    }
    if(x==0 || x==1)
    {
        resultado=1;
        return resultado;
    }
    else
        {
            resultado=x * factorial(x-1);
            return resultado;
        }
}

