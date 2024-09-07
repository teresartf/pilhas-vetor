#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "pilha.h"

int main(){
    //criando pilha
    Stack* pilha = new_stack();

    //pop vazia
    pop(pilha);

    //push 5, 6, 7, 9, 13
    push(pilha, 5);
    push(pilha, 6);
    push(pilha, 7);
    push(pilha, 9);
    push(pilha, 13);

    //show 
    show_stack(pilha);

    //push com pilha lotada
    push(pilha, 16);

    //pop 13
    pop(pilha);

    //show 9, 7, 6, 5
    show_stack(pilha);

    //free
    liberar(pilha);

    return 0;
}