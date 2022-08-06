#include<stdio.h>

void main()
{
    //Declaracion de variables
    char palabra[20];
    int cant;
    int i;
    
    //Se ingresa la palabra que se quiere saber cuantas A minusculas tiene
    printf("Ingrese la palabra:");
    //Se la guarda en la variable "palabra"
    gets(palabra);

    //Se incializa un contador llamado "cant" en 0
    cant = 0;
    //Se incializa la posicion de la variable i en 0
    i = 0;
    //Se indica que mientras la palabra no sea vacio se va a avanzar un caracter
    while (palabra[i]!='\0')
    {
        //Si el caracter es a se suma un 1 al contador
        if (palabra[i]=='a')
        {
            cant++;
        }
        //Se avanza una posicion
        i++;
        
    }
    printf("La cantidad de A minusculas que tiene la palabra %s es %i",palabra,cant);
    
}