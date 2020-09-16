//Everton Cordeiro dos Santos  RA: 98689
#include <stdio.h>
#include <stdlib.h>

#define qtd 4
//------Variaveis p/ Fila--------
int Fila[qtd] ;
	int inicio = -1;
	int fim = -1;	
//------Variaveis p/ Pilha-------	
int Pilha[qtd] ;
	int topo = 0;

//------------------------------
int main() {	

int i;
int temp;
//Adiciona os valores na fila
 AdicionaNaFila(2);
 AdicionaNaFila(2);
 AdicionaNaFila(3);
 AdicionaNaFila(4);

//Mostra os Valores inseridos na fila na sua respectiva ordem
   		printf("\n\n");
   		printf("Na fila temos: ");
   		for(i==qtd; i<qtd; i++){
   		printf("%d, ", Fila[i]);
   	
  }
  //Mostrar os valores invertidos Tirando eles no formato de pilha
       printf("\n");
       printf("O inverso fica :");
	     
        for(temp=topo-1; temp >= 0 ; temp--){
      		printf("%d,", Fila[temp]);
    }

	return 0;
}
//-------------------FILA--------------------------------------

int vazio(){
	
	return (inicio == -1);
}
//Se a fila estiver vazia adiciona no primeiro elemento do vetor
void AdicionaNaFila(int elemento){
	
	if(vazio()){
		int i;
		inicio = fim = 0;
		Fila[0] = elemento;
		printf("\n %d Adicionado a fila", elemento);
	}
	
	else if(fim == qtd - 1){
		printf("\n Fila ta lotada");
	}
//Adiciona os demais elemento na fila	
	else{
		
		fim++;
		Fila[fim] = elemento;
		printf("\n %d Adicionado a fila", elemento);
	}
//-----------------------PILHA---------------------------------
	if(topo==qtd){		
		return 0;
	}
//Soma +1 para a posição na pilha
	else{	
		topo++;
		return 1;
	}

}
//----------------------FILA------------------------------------
/*int TiraDaFila(){
	
	int Tirar = 0;
	
	if(vazio()){
		printf("\n tahh vazio");
	}
	else if(inicio==0 && fim==0){
		Tirar = Fila[inicio];
		inicio = fim = -1;
		printf("\n Valor %d foi retirado", Tirar );
	}
	else{
		Tirar = Fila[inicio];
		inicio++;
		printf("\n Valor %d foi retirado", Tirar);
	}
	return Tirar;
//-----------------------PILHA----------------------------------------
	if(topo==0){
		return -1;
	}
	else{
		topo--;
		return Pilha[topo];
	}

}
*/


