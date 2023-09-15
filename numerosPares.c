#include <stdio.h>
 
int main(){

    int i;
    // usando For

    // for(i = 1; i <= 100; i++){
    //     if(i%2 == 0){
    //         printf("%d\n", i);
    //     }
    // }

    // SOLUCAO CHATGPT
    for (i = 2; i <= 100; i += 2){
        printf("%d\n", i);
    }

    return 0;
}