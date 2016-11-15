#include<stdio.h>
#include<stdlib.h>
int main()
{
  char nombre[50];
  int i;
  printf("\n\t Ingresa tu nombre\t");
  scanf("%s",&nombre);//se lee como string
  printf("\n\t Hola %s :D ",nombre);
  for(i=0;i<50;i++)
    {
    printf("\n\t %c ",nombre[i]);
  }
  printf("\n\n");
  system("PAUSE");
  return 0;
}
