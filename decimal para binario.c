/* dado um n�mero em decimal converter para sua forma binaria */

#include <stdio.h>
int main() {
 int numero;
 int x;

 printf("Digite o numero: ");
 scanf("%d", &numero);

 // Verifica se � o n�mero 1 e imprime ele mesmo
 if(numero == 1) {
  printf("%d\n", numero);
 }
 // Caso o n�mero seja maior do que 1, realiza
    // divis�es sucessivas por 2, imprimindo o seu
    // resto para constru��o da forma bin�ria.
 else {
        printf("\nForma binaria: \n");
  do {
   x = numero % 2;
   printf("%d", x);
   numero = numero / 2;
  } while(numero >= 1);
 }
}
/* OBSERVA��O: a leitura do numero binario e feita do ultimo ao primeiro numero */
