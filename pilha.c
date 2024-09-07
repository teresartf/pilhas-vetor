#include <stdio.h>
#include <stdlib.h>

#include "pilha.h"

Stack* new_stack(){
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = 0;
    return stack;
}

void push(Stack* stack, int value){
    if(!can_push(stack)){
        printf("\nCapacidade da pilha estourou!.");
        return;
    }

    stack->items[stack->top] = value;
    stack->top++;
}

int pop(Stack* stack){
    if(!can_pop(stack)){
        printf("\nPilha vazia! ");
        return -1;
    }

    float value = stack->items[stack->top-1];
    stack->top--;
    return value;
}

int is_empty(Stack* stack){
    return (stack->top == 0);
}

int is_full(Stack* stack){
    return (stack->top == SIZE);
}

int can_push(Stack* stack){
    return !is_full(stack);
    
}

int can_pop(Stack* stack){
    return !is_empty(stack);
}

void liberar(Stack* stack){
    free(stack);
}

void show_stack(Stack* stack){
    if(is_empty(stack)){
        printf("\nPilha vazia.");
        return;
    }

    for(int i = stack->top-1; i >= 0; i--){
        printf("\n%d", stack->items[i]);
    }

    printf("\n");
}