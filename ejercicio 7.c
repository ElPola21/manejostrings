#include <stdio.h>


int main()
{
  //Declaro variables
  int i;
  int menor;
  char nombre;
  char nombres[6];
  int edad[6];
  
  //Ingreso y guardo los nombres y edades a medida que voy recorriendo el for
  for(i=1;i<=5;i++)
  {
      printf("Ingrese nombre %d:",i);
      scanf("%s",&nombres[i]);
      
      printf("Ingrese edad:");
      scanf("%d",&edad[i]);
  }
  
  //Inicializo variable mayor en 0 y nombre en vacio
  menor = 200;
  nombre = "";
  /*Vuelvo a recorrer el for para comparar las edades, 
    si la edad que estoy comparando es menor a la que habia guardado en la variable menor, 
    esa edad se convierte en la menor edad, y guardo el nombre de esa persona*/
  for(i=1;i<=5;i++)
  {
      if(edad[i] < menor)
      {
          menor = edad[i];
          nombre = nombres[i];
      }
  }
  
  printf("La persona de menor edad es %c con %d años",nombre,menor);

}