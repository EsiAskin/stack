#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 10

int stack[MAX];
int top = -1;

void push(int stack[]){
    int val;
    printf("Kac eklemek istiyorsunuz ?");
    scanf("%d",&val);
    
    if(top==MAX-1) printf("STACK OVERFLOW \n");

    else{
        top++;
        stack[top]=val;
    }
}

void pop(int stack[]){
    if(top==-1) printf("Sildirebileceðiniz bir eleman bulunmamaktadýr.\n");
    else{
        printf("%d elemani silindi\n", stack[top]);
        top--;
    }
}

void peek(int stack[]){
    if(top==-1) printf("Stack bos.\n");
    else{
        printf("Goruntulenen eleman %d \n", stack[top]);
    }
}

void display(int stack[]){
    if(top==-1) printf("Stack bos.\n");
    else{
        int i;
        for(i=top;i>=0;i--){
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}



int main(){
    push(stack);
    push(stack);
    push(stack);
    push(stack);
    display(stack);
    peek(stack);
    pop(stack);
    display(stack);
    
}






