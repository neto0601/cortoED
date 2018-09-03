#include <stdio.h>

int main (void){

  int numero, tamanio, posicion, valor;

// Aqui se define el tamanio del vector


  printf("Escriba el tamanio del vector:  ");
  scanf("%d", &tamanio);

// Aqui se llena el vector con valores
  int vector[tamanio];
      for(int j=0;j<tamanio;j++){
          printf("Escribe el valor del vector en la posicion (%d):    ", j+1);
          scanf("%d", &vector[j]);
      }

      printf("Escriba valor que desea buscar:  ");
      scanf("%d", &valor);

              for(int i=0; i<tamanio; i++){
                if(vector[i]==valor){
                  printf("El valor que introdujo se encuentra en la posicion: (%d)", i);
                  printf("\n");
                  return 0;
                }else{
                  printf("El valor que introdujo no existe");
                  printf("\n");
                  return 0;
                }

              }

}
