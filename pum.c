#include <stdio.h>
 
int main() {

    int numeroLinhas, valor;
    valor = 1;

    scanf("%d", &numeroLinhas);

    for(int i = 1; i <= numeroLinhas; i++){
        printf("%d %d %d PUM\n", valor, valor + 1, valor + 2);
        valor = valor + 4;
    }


    // MENOS LINHAS POREM COMPLEXO
    // int numeroLinhas;

    // scanf("%d", &numeroLinhas);

    // for(int i = 1; i <= numeroLinhas*4; i 7= i + 4){
    //     printf("%d %d %d PUM\n", i, i + 1, i + 2);

    // }

    return 0;
}