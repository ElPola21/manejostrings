#include <stdio.h>

int main()
{
    //Declaro las variables
    char palabra[20] = {0};
    int alfabeto[27] = {0};
    int i;
    int col1;
    int col2;
    
    //Se ingresa la palabra
    printf("Ingrese una palabra de hasta 20 letras en mayúsculas: ");
    gets(palabra);
    
  /*Alfabeto[27] cuenta con 26 espacios, cada uno corresponde a 
    su respectiva letra en el abecedario. El abecedario en mayúsculas ASCII empieza 
    en el 65, por lo tanto restando 65 a la letra en cuestion se consigue 
    su posicion en el abecedario y se suma uno a su posicion por cada vez que aparezca*/
    for (i=0;i<20;i++)
    {
        alfabeto[(palabra[i]-65)]++;
    }
    
    //Recorriendo el vector arr se busca cual es el valor mas alto (la letra mas repetida)
    col1 = 0;
    col2 = 0;
    for (int i = 0; i<26; i++){
        if (alfabeto[i] > col1){
            col1 = alfabeto[i];
            col2 = i+65;
        }
    }
    //Se imprime la letra mas repetida
    printf("\nLetra mas repetida: %c", col2);
    
}