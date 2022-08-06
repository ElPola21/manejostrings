#include <stdio.h>
#include <string.h>

int main ()
{
    //Defino las variables
    char palabra[30] = {0};
    int i;
    
    //Ingreso las palabra que va a ser encriptada en Codigo Cesar y la guardo en palabra
    printf("Ingrese una palabra de hasta 20 letras en mayúsculas:");
    gets(palabra);
    
    //Se recorre la cantidad de caracteres de la palabra 
    for(i=0;i<strlen(palabra);i++)
    {
        //Se le suma 3 al valor si cumple la condicion 
        palabra[i] = (palabra[i] + 3);
        if(palabra[i] + 3 > 90)
        {
            palabra[i] = palabra[i] - 26;
        }
        
    }
    
    printf("\nPalabra encriptada en Codigo Cesar: %s",palabra);
}