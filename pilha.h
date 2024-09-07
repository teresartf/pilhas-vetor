#define SIZE 5

typedef struct {
    int top;
    int items[SIZE];
} Stack;

Stack* new_stack();
void push(Stack* stack, int value);
int pop(Stack* stack);
int is_full(Stack* stack);
int is_empty(Stack* stack);
int can_pop(Stack* stack);
int can_push(Stack* stack);
void liberar(Stack* stack);
void show_stack(Stack* stack);