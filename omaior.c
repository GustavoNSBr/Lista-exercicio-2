#include <stdio.h>
 
// FUNCAO ABS VEM DA MATEMATICO - TRANFORMA O VALOR NEGATIVO EM POSITIVO E MANTER O VALOR POSITIVO

int main() {
  
    int a, b, c, maior;

    scanf("%d %d %d", &a, &b, &c); // pro scanf, espoço ou enter ("\n") é a mesma coisa

    maior = (a + b + abs(a-b))/2; // maior entre a e b
    maior = (maior + c + abs(maior-c))/2;

    printf("%d eh o maior\n", maior);
    
    return 0;
}