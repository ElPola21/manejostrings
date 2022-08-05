/*1) Permitir que el usuario ingrese una palabra de hasta 20 letras. Mostrar en pantalla cuántas letras tiene la palabra ingresada.
Por ejemplo "CASA" debe indicar 4 letras.*/

#include<stdio.h>


void main()
{
    //Declaracion de variables
    char palabra[20];
    int cant;
    int i;
    
    //Se ingresa la palabra que se quiere saber cuantas letras tiene
    printf("Ingrese la palabra:");
    //Se la guarda en la variable "palabra"
    gets(palabra);
    
    //Se incializa un contador llamado "cant" en 0
    cant=0;
    //Recorro la palabra ingresada que puede tener un maximo de 20 caracteres
    for(i=0;i<20;i++)
    {
       //Si el caracter no es vacio se suma un 1 al contador
       if(palabra[i] !='\0')
       {
            cant++;
       }
       
       //Si el caracter es vacio se termina el for
       else
       {
           i=20;
       }
       
    }
    
    printf("La cantidad de letras de la palabra %s es %i",palabra,cant);

}