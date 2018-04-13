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
*\ brief Recibe el primer n�mero u operando.
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
*\ brief Recibe el segundo n�mero u operando.
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
*\ brief Recibe dos n�meros ingresados por el usuario y los suma.
*\ param Los n�meros ingresados por el usuario.
*\ return El resultado de la suma entre los dos n�meros ingresados.
*/

float sumar(float x, float y)
{
    float resultado;
    resultado = x + y;
    return resultado;
}

/**
*\ brief Recibe dos n�meros ingresados por el usuario y los resta.
*\ param Los n�meros ingresados por el usuario.
*\ return El resultado de la resta entre los dos n�meros ingresados.
*/

float restar(float x, float y)
{
    float resultado;
    resultado = x - y;
    return resultado;
}
/**
*\ brief Recibe dos n�meros ingresados por el usuario y los multiplica.
*\ param Los n�meros ingresados por el usuario.
*\ return El resultado de la multiplica entre los dos n�meros ingresados.
*/

float multiplicar(float x, float y)
{
    float resultado;
    resultado = x * y;
    return resultado;
}
/**
*\ brief Recibe dos n�meros ingresados por el usuario y los divide.
*\ param Los n�meros ingresados por el usuario.
*\ return El resultado de la divisi�n entre los dos n�meros ingresados.
*\ IMPORTANTE: el segundo n�mero a ingresar (divisor) NO PUEDE SER CERO.
*/

float dividir(float x, float y)
{
    float resultado;
    resultado= x/y;
    return resultado;
}

/**
*\ brief Recibe UN S�LO n�mero ingresado por el usuario y calcula su factorial.
*\ param El n�mero ingresado por el usuario.
*\ return El resultado del c�lculo del factorial del n�mero ingresado.
*\ IMPORTANTE: Por definici�n:
                              * Factorial(0)=Factorial(1)= 1.
                              * No Existe factorial de n�meros negativos.
                              * El m�ximo que puede obtenerse es el factorial de 30 (overflow de stack, pasando 30).
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

