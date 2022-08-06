#include <stdio.h>
#include <string.h>

int main()
{
    //Declaro las variables
    char palabra1[20]; 
    char fin[5] = "FIN\n";
    char palabraN[20];

    //Ingreso el primer nombre y lo guardo en primero
    printf("Ingrese un nombre: ");
    fgets(palabra1, 20, stdin);
    
    //Se utiliza el do while para forzar al menos 1 vez que ejecute el bloque
    do {
        printf("Ingrese un nombre: ");
        fgets(palabraN, 20, stdin);
        
        //Detecto si se escribio la palabra "FIN"
        if(strcmp(palabraN, fin) == 0) 

        break;
        
        //Comparo los nombres y detecto el que se ubique primero en orden alfabético
        if (strcmp (palabra1, palabraN) > 0 ) 
            {
            strcpy (palabra1, palabraN);
            }
        } 

    while (1);

    printf("\nEl primer nombre en orden alfabetico es: %s", palabra1); 
    
}