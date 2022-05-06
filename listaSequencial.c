#include <stdio.h>
#include <stdlib.h>
#define TAM 10

struct tLista{
    int n;
    char elemento[TAM];
};

int main (void){
    struct tLista lst;
    struct tLista lst2;

    return 0;
}

// Iniciar a lista com o valor 0 no primeiro no
void iniciaLista(struct tLista *lst, struct tLista *lst2){
    lst->n = 0;
    lst2->n = 0;
}

//acessar o k_esimo no de uma lista
char acessar(struct tLista *lst, int num){
    char dado;
    if((num < 0 || num > (lst->n-1)) || (lst->n > TAM-1))
        printf("Erro - Elemento não pode ser acessado");
    else {
        dado = lst -> elemento[num];
        return (dado);
    }

}

/* Insere o dado no endereço K, no inicio da lista
A complexidade desse algoritmo é de O(n)
*/
void inserirDado(struct tLista *lst, int k, char dado){
    int i;
    if((k < 0 || k > (lst->n-1)) || (lst->n > TAM-1))
        printf("Erro - Elemento não pode ser acessado");
    else {
        for(i = lst->n; i > k; i--){
            lst->elemento[i] = lst->elemento[i-1];
        }
        lst->elemento[k] = dado;
        lst->n++;
    }
}


/*
Inserindo no final, temos complexidade constante O(1)
*/
void inserirFinalLista(struct tLista *lst, char dado){
    if(lst->n > TAM-1)
        printf("Nao sera possivel inserir no final.");
    else {
        lst->elemento[lst->n] = dado;
        lst->n++;
    }
}


/*
Remover dado da lista sequencial,
a complexidade de tempo desse procedimento é de O(n) pois te que tealizar o movimento dos N elementos
pra remover apenas um dado e reajustar os endereços da lsita
*/
void removerDado(struct tLista *lst, int k){
    int i;
    if((k < 0 || k > (lst->n-1)) || (lst->n > TAM-1))
        printf("Erro - Elemento não pode ser acessado");
    else {
        for (i = k; i < lst->n; i++){
            lst->elemento[i] = lst->elemento[i+1];
        }
        lst->n--;
    }
}

/*
Método para concatenar duas listas - a segunda será inserida após o ultimo dado da primeira lista
*/

void concatenarListas(struct tLista *lst, struct tLista *lst2){
    int i, limite;
    if(lst->n + lst2->n <= TAM){
        limite = lst2->n;
    } else {
        limite = TAM - lst->n;
    }
    for (i=1; i<=limite; i++){
        lst->elemento[lst->n] = lst2->elemento[i-1];
        lst->n++;
    }

}

/*
Inverter os valores de uma lista usando variável temporária - a complexidade desse algoritmo é de O(n)
*/

void inverterLista(struct tLista *lst){
    int i;
    char temp; //variavel temporaria do no
    for (i=0; i<= (lst->n - 1)/2; i++){
        temp = lst->elemento[i];
        lst->elemento[i] = lst->elemento[lst->n - (i + 1)];
        lst->elemento[lst->n - (i + 1)] = temp;

    }
}







