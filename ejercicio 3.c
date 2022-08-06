#include<stdio.h>


void main()
{
    //Declaracion de variables
    char palabra1[20] = {0};
    char palabra2[20] = {0};
    int i;
    int SonDistintas;
    
   
    printf("Ingrese la primer palabra:");
   
    gets(palabra1);
    
    printf("Ingrese la segunda palabra:");
    
    gets(palabra2);
    
    
    SonDistintas=0;
    
    for(i=0;i<20;i++)
    {
      
       if(palabra1[i] != palabra2[i])
       {
            SonDistintas=1;
       }
       
    
       
    }
    
    if( SonDistintas == 1)
    {
        printf("Las palabras son distintas");
    }
    
    else
    {
        printf("Las palabras son iguales");
    }

}