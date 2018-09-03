#include <stdio.h>

int main (void){

  int sala [5][5], total, respuesta, afila, acolumna;
  double suma;

//aqui se llena de ceros la matriz para simbolizar los asientos vacios

  for(int i=0; i<5; i++){
    for(int k=0; k<5; k++){
      sala[i][k]=0;
    }
  }

    printf("Bienvenido a la sala de cine!!!");
    printf("\n");
    printf("1-)Desea comprar un asiento?   ");
    printf("\n");
    printf("2-)Mostrar ganancias del dia   ");
    printf("\n");
    printf("3-) Salir");
    printf("\n");
    scanf("%d", &respuesta);



//Aqui se da el primer metodo, 1 simboliza asiento ocupado, y 0 lo contrario, por lo que primer el programa analiza si la matriz contiene un 1 en la posicion requerida

       if(respuesta==1){
            printf("Escriba la fila del asiento que desea   ");
            scanf("%d", afila);
            printf("\n");
            printf("Escriba la columna del asiento que desea   ");
            scanf("%d", acolumna);
               if(sala[afila][acolumna]==1){
                 printf("Hijole, el asiento ya esta ocupado :'v'");


                    printf("Bienvenido a la sala de cine!!!");
                    printf("1-)Desea comprar un asiento?   ");
                    printf("2-)Mostrar ganancias del dia   ");
                    printf("3-) Salir");
                    scanf("%d\n", respuesta);


               }else{
                 sala[afila][acolumna]=1;
                 printf("Asiento asignado!!!");
               }

       }
       if(respuesta==2){
               for(int i=0; i<5; i++){
                   if(sala[1][i]==1){
                         suma=suma+5.0;
                   }
               }
               for(int j=0; j<5; j++){
                   if(sala[2][j]==1){
                         suma=suma+3.50;
                   }
               }
               for(int k=0; k<5; k++){
                   if(sala[3][k]==1){
                         suma=suma+3.50;
                   }
               }
               for(int o=0; o<5; o++){
                   if(sala[4][o]==1){
                         suma=suma+3.50;
                   }
               }
               for(int n=0; n<5; n++){
                   if(sala[5][n]==1){
                         suma=suma+2.50;
                   }
               }

               printf("%s\n","El total de ganancias es de: $", suma );
             }

       if(respuesta==3){
         return 0;
       }
}
