#include <stdio.h>
 
/*- Entre com três medidas e verifique se formam um triângulo. A regra para saber se com medidas podemos formar um triângulo é dada por: se cada um dos lados é menor do que a soma dos outros dois.*/
 
int main(void) {
 
 int Lx = 0;
 int Ly = 0;
 int Lz = 0;
 int soma = 0;

 printf("Qual valor do lado x\n");
 scanf("%i", &Lx);
 printf("Qual valor do lado y\n ");
 scanf("%i", &Ly);
 printf("Qual valor do lado z\n");
 scanf("%i", &Lz);
  
 if(Lx < Ly + Lz){
    printf("Esses valores formam um triângulo");
  }
  else if(Ly < Lx + Lz){
    printf("Esses valores formam um triângulo");
  }
  else if(Lz < Lx + Ly){
    printf("Esses valores formam um triângulo");
  }

  return 0;
}
