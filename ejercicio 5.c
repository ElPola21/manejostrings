#include<stdio.h>

void main()
{
    //Declaracion de variables
    char palabra1[20];
    char palabra2[20];
    int cant1;
    int i;
    int cant2;
    int j;
    
    //Se ingresa la palabra que se quiere saber cuantas vocales minusculas tiene
    printf("Ingrese la primera palabra: ");
    //Se la guarda en la variable "palabra1"
    gets(palabra1);
    
    //Se incializa un contador llamado "cant1" en 0
    cant1 = 0;
    //Se incializa la posicion de la variable i en 0
    i = 0;
    
    //Se indica que mientras la palabra no sea vacio se va a avanzar un caracter
    while (palabra1[i] != '\0')
    {
        //Por cada vocal minuscula que tenga la palabra se suma 1 al contador 
        if (palabra1[i] == 'a' || palabra1[i] == 'e' || palabra1[i] == 'i' || palabra1[i] == 'o' || palabra1[i] == 'u')
        {
            cant1++;
        }
        
        //Se avanza una posicion
        i++;
    }
    printf("\nLa cantidad de vocales minusculas que tiene la palabra %s es %i\n ",palabra1,cant1);
    
    //Se ingresa la palabra que se quiere saber cuantas vocales mayusculas tiene
    printf("\nIngrese la segunda palabra: ");
    //Se la guarda en la variable "palabra2"
    gets(palabra2);
    
    //Se incializa un contador llamado "cant2" en 0
    cant2 = 0;
    //Se incializa la posicion de la variable j en 0
    j = 0;
    
    //Se indica que mientras la palabra no sea vacio se va a avanzar un caracter
    while (palabra2[j] != '\0')
    {
        //Por cada vocal mayuscula que tenga la palabra se suma 1 al contador 
        if (palabra2[j] == 'A' || palabra2[j] == 'E' || palabra2[j] == 'I' || palabra2[j] == 'O' || palabra2[j] == 'U')
        {
            cant2++;
        }
        
        //Se avanza una posicion
        j++;
    }
    
    printf("\nLa cantidad de vocales mayusculas que tiene la palabra %s es %i",palabra2,cant2);
    
}