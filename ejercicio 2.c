/*Permitir el ingreso de una palabra y mostrarla en pantalla al revés.
Por ejemplo, para "CASA" se debe mostrar "ASAC".*/

#include <stdio.h>

void main()
{
    //Declaracion de variables
    char palabra[20];
    int i;
    int j;
    
    //Se ingresa la palabra que se quiere escribir al reves
    printf("Ingrese la palabra: \n");
    //Se la guarda en la variable "palabra"
    gets(palabra);
    
    //Se incializa la variable i en 0
    i = 0;
    //Se indica que mientras la palabra no sea vacio se va a avanzar un caracter
    while(palabra[i] != '\0')
    {
        i++;
    }
    
    printf("La palabra al reves es: ");
    
    //Se empieza a restar desde el ultimo valor que tomo i en el while
    for (j=i-1;j>=0;j--)
    { 
        //Cada vez que se resta el for, se muestra el caracter
        printf("%c", palabra[j]);
    }
    
}