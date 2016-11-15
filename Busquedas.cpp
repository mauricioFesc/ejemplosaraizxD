#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{

  float busqueda;
  int k,registro,tam;
  char op;
  bool encontrado;//booleano falso 0 o verdadero 1
  system("color 03");
  printf("\n\t Programa administrador de redes");
  printf("\n\t cuantos registros va a guardar?\t");
  scanf("%i",&tam);

  float consumo_mb[100];

  printf("\n\t Ingresar consumo en megabits ");
  for(k=0;k<tam;k++)
  {
    do{
       printf("\n\t conexion %i \t",k+1);
       scanf("%f",&consumo_mb[k]);
       if(consumo_mb[k]<0)
        {
         printf("\n\tError!!!");
        }
    }while(consumo_mb[k]<0);
  }
  do{
    encontrado=0;
    system("cls");
    system("color a9");
    fflush(stdin);
    printf("\n\t Busquedas\n\t a - Aleatoria");
    printf("\n\t s - Secuencial\t");
    scanf("%c",&op);
    op=tolower(op);//pasar caracter a minúscula
    //toupper para pasar a mayúscula
    switch(op){
      case ('a'):
       printf("\n\t Busqueda aleatoria");
       printf("\n\t Numero de registro a buscar\t");
       scanf("%i",&registro);
       while(registro<1||registro>tam){
        printf("\n\t Error\nNumero de registro a buscar\t");
        scanf("%i",&registro); //índice
       }
       printf("\n El dato es %f \n", consumo_mb[registro-1]);
      break;
      case ('s'):
       printf("\n\t Busqueda secuencial");
       printf("\n\t Valor a buscar \t");
       scanf("%f",&busqueda);
       for(k=0;k<tam;k++){
        if(consumo_mb[k]==busqueda)
        {
          printf("\n\t %i",k+1);//en qué no. de registro se encontro valor
          encontrado=1;
        }
       }
       if(encontrado==0)
       {
         printf("\n\t No se encontro valor :( </3 \n");
       }
      break;
    }
    printf("\n\t Desea buscar otro valor? 1-si\t");
    scanf("%i",&k);
  }while(k==1);

  system("PAUSE");
  return 0;
}
