#include <stddef.h>
#include "main.h"
#define _USE_MATH_DEFINES
#include "math.h"
#include "string.h"
#include "stdio.h"
#include "stdlib.h"
#include <time.h>
#include "Aux_Func.h"

// Legacy global variables
// if used elsewere it MUST be defined as extern
const char polar[] = { "polar" };
const char cartesian[] = { "cartesian" };

// Global variables
// if used elsewere it MUST be defined as extern

const char* face[] = {	"Ace", "Deuce", "Three", "Four", "Five", 
						"Six", "Seven", "Eight", "Nine", "Ten",
						"Jack", "Queen", "King"	};

const char* suit[] = { "Hearts", "Diamonds", "Clubs", "Spades" };

// Mude a string com o caminho (PATH) do diret�rio do seu projeto.
// Use duas contrabarras para separar os diret�rios.
const char Path[] = { "C:\\Repos\\1ELE705_SEM13_DeckLinkedList\\" };

//void view(ListCardNodePtr lPtr, FILE* cfPtr) {
//
//}

void createOneFr52Deck(ListCardNodePtr* sPtr) {
	// Proibido alterar o c�digo acima


	// Crie seu c�digo aqui


	// Proibido alterar o c�digo abaixo
}


void shuffle(ListCardNodePtr* sPtr) {
	// Proibido alterar o c�digo acima


	// Crie seu c�digo aqui


	// Proibido alterar o c�digo abaixo
}

#if 0
// C�digo inicial para a fun��o shuffle
void shuffle(ListCardNodePtr* sPtr) {
	ListCardNodePtr trocaPtr, jumpPtr, trocaAnteriorPtr, jumpAnteriorPtr, trocaProxPtr;
	int N;

	// trocaPtr e jumpPtr recebem o primeiro n�, se existir.
	if (*sPtr == NULL) return;
	trocaAnteriorPtr = NULL;
	trocaPtr = *sPtr;
	jumpAnteriorPtr = NULL;
	jumpPtr = *sPtr;

	while (trocaPtr != NULL) {
		do {
			// Sorteia N entre 1 e 100
			N = randomico(); //rand() % 100 + 1; // Descomente e veja que nunca vai funcionar.
			// jumpPtr percorre N n�s-carta na lista de forma circular
			for (; N > 0; N--) {
				jumpAnteriorPtr = jumpPtr;
				jumpPtr = jumpPtr->nextPtr;
				if (jumpPtr == NULL) {
					jumpPtr = *sPtr;
				}
			}
		} while (jumpPtr->nextPtr == trocaPtr || trocaPtr->nextPtr == jumpPtr);
		// Proibido alterar o c�digo acima

		// Continue o c�digo



		// Proibido alterar o c�digo abaixo
	}
}
// Fim do c�digo inicial para a fun��o shuffle
#endif



// Este projeto implementa fun��es para o gerenciamento de cartas de.
// baralho, que podem ser utilizadas para a constru��o de um jogo.
// 
// As fun��es a serem constru�das s�o: createOneFr52Deck e shuffle.
//
// A fun��o createOneFr52Deck cria um monte contendo as cartas de um baralho
// padr�o franc�s com 52 cartas. O monte de cartas � uma lista din�mica cujos
// n�s s�o do tipo ListCardNode e o ponteiro para seu n� inicial � do tipo
// ListCardNodePtr.
// Esta fun��o recebe o endere�o do ponteiro de uma lista ligada de cartas 
// (ponteiro para o ponteiro do monte) e realiza a inser��o das 52 cartas 
// padr�o do baralho franc�s em ordem crescente. A ordem crescente � 
// organizada pelo valor crescente dos nipes e, de forma secund�ria, pelo valor
// crescente das faces. Assim, os nipes v�o de Hearts a Spades e ter valor de 1
// a 4, respectivamente. Estes seguem a sequencia descrita pelo vetor de strings
// constantes suit. O valor da face vai de 1 a 13, onde Ace � 1 e King � 13,
// respectivamente, seguindo a sequencia definida pelo vetor de strings constantes
// face.
// A fun��o createOneFr52Deck recebe como par�metro o endere�o do ponteiro
// para um monte de cartas (ListCardNodePtr*) e cria os 52 n�s do monte,
// seguindo a sequencia descrita e usando os vetores de strings face e suit, 
// que s�o strings globais com valores constantes.
//
//
// A fun��o shuffle embaralha uma dada lista din�mica de cartas. A fun��o 
// recebe o endere�o do ponteiro para o n� inicial de uma lista de cartas.
// A forma como a fun��o deve embaralhar as cartas da seguinte forma:
// Um ponteiro denominado trocaPtr deve ser criado. No in�cio da execu��o
// da fun��o o ponteiro trocaPtr aponta para o primeiro elemento da lista
// de cartas. Al�m deste, um ponteiro denominado jumpPtr tamb�m deve ser
// criado e, inicialmente, tamb�m deve apontar para o primeiro n� da lista.
// Pelo fato da lista ser din�mica, n�o h� como saber a quantidade de n�s
// presentes na lista, a n�o ser que se percorra a lista at� o fim contando
// seus n�s. No entanto, percorrer a lista sem realizar alguma tarefa � 
// perda de tempo de processamento �til.
// Assim, inicialmente um n�mero denominado N entre 1 e 100 deve ser 
// sorteado. O jumpPtr deve se deslocar sequencialmente na lista por N n�s.
// Caso atinja o final da lista antes de completar os N deslocamentos, 
// o ponteiro jumpPtr deve voltar a apontar para o inicio da lista e 
// continuar se deslocando, at� completar os N deslocamentos.
// O n� pontado por jumpPtr deve ser trocado com o n� apontado por trocaPtr
// e o ponteiro trocaPtr deve passar a apontar o pr�ximo elemento da lista.
// O processo se repete com um novo sorteio de N e com o ponteiro jumpPtr
// sendo deslocado circularmente pela lista � partir da �ltima posi��o
// que havia parado. Assim, jumpPtr fica circulando pela lista ap�s cada
// sorteio de N.
// O elemento apontado por jumpPtr � trocado com o elemento apontado por 
// trocaPtr e trocaPtr � apontado para o pr�ximo n� da lista.
// O processo termina quando trocaPtr chegar ao fim da lista, apontando 
// para NULL.
//