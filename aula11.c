#include <stdio.h>
#include <stdlib.h>

// Manoela Resende 2210100234 aula10

/*a) Escreva uma função para remover todos elementos de uma lista
void removerTodos(Lista *minhaLista);
b) Escreva uma função para remover um determinado element da lista
Lista* removerItem(Lista *lista, int valor);*/

struct lista{
    int valor;
    struct lista *proximo;
};
typedef struct lista Lista;

//LETRA A

void removerTodos(Lista *minhaLista){

	while( minhaLista != NULL){
                //guardo o proximo elemento
		Lista *proximo = minhaLista->proximo;

		//removo o elemento atual
		free(minhaLista); 

		//proximo elemento se torna o elemento atual
		minhaLista = proximo; 

	}

}

//LETRA B

Lista* removerItem(Lista *minhaLista, int valor){

        //minhaLista nao contem nada
	if(minhaLista == NULL){
	    return minhaLista;
	}else{

             //minhaLista contem alguma coisa
             Lista *inicio = minhaLista;
	     Lista *anterior = NULL;
             //iterar sobre a minha minhaLista para encontrar o elemento
	     while(minhaLista != NULL){
		
		//encontrei o elemento para remover
		if(minhaLista->valor == valor){
		     //Sei que eh o primeiro elemento da minhaLista
		     if(anterior == NULL){
			 //salvo o proximo elemento antes de desalocar
			 Lista *proximoAux = minhaLista->proximo;
		         free(minhaLista); 
			 return proximoAux;
		     }else{
			  //proximo elemento do anterior recebe o proximo elemento atual   
			 anterior->proximo = minhaLista->proximo;     
                         free(minhaLista);                 
			 return inicio;
		     }

		}
                anterior = minhaLista; 
                minhaLista = minhaLista->proximo;
              
	     }

	}


}


int main(){

    Lista* minhaLista = NULL; 
    //minhaLista=removerItem(minhaLista, 1000); só pra compilar certinho
}