#include <stdio.h>
#include <stdlib.h>
#define m 10

struct Pilha{
    int topo;
    char elemento[m];
};

int main (void){
    struct Pilha p;


    return 0;
}

void iniciaPilha (struct Pilha *p){
    p->topo = -1; // complexidade O(1) - constante
}

//consultar elemento
char acessarTopo(struct Pilha *p){
    char x;
    if (p->topo == -1 )
        printf("Pilha vazia");
    else {
        x = p->elemento[p->topo];
    }

    return x;
}

// Complexidade O(1)
void empilhar(struct Pilha *p, char x){
    if(p->topo == m -1) // verifica se a pilha esta cheia
        printf("Pilha cheia");
    else {
        p->topo++; //insere o espaço do novo elemento na pilha
        p->elemento[p->topo] = x; // recebe o dado passado por argumento
    }

}

void desempilha(struct Pilha *p){
    if(p->topo == -1)
        printf("Pilha esta vazia");
    else {
        p->topo--; // desempilha apenas um elemento
    }
}
