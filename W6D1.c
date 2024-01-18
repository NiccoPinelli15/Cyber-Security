#include <stdio.h>
#include<stdlib.h>

int main () {
	
char scelta; 
char nome[20]; 
int punteggio;
int num_dom; 

printf("Benvenuti a CHI VUOL ESSERE EPIC \n\n");
printf("Scopo del gioco: rispondere correttamente alle domande.\n\n");

do { 
	
	printf("Cosa vuoi fare?\n");
	printf("\nA) Iniziare una nuova partita\n");
	printf("B) Uscire dal gioco\n\n");
	printf("Digita qui la tua risposta:");
	scanf(" %c", &scelta);
	
	if (scelta=='A' || scelta=='a'){
		
		printf("\nInserisci il tuo nome:");
		scanf("%s", &nome);
		printf("\nOttimo %s, iniziamo!\n\n", nome);
		
		printf("Prima domanda:\n");
		printf("Qual e' l'oceano piu' grande del mondo?\n");
		printf("A) Indiano B) Pacifico C) Atlantico\n");
		char risposta1;
		printf("Inserisci la risposta:");
		scanf(" %c", &risposta1);
		if (risposta1=='B' || risposta1=='b'){
			printf("Risposta corretta\n\n"); 
			punteggio++;
		}else {
			printf("Risposta sbagliata\n\n");
		}
		
		printf("Seconda domanda:\n");
		printf("Quante strisce ci sono sulla bandiera americana?\n");
		printf("A) 11 B) 9 C) 13\n");
		char risposta2;
		printf("Inserisci la risposta:");
		scanf(" %c", &risposta2);
		if (risposta2=='C' || risposta2=='c'){
			printf("Risposta corretta\n\n"); 
			punteggio++;
		}else {
			printf("Risposta sbagliata\n\n");
		}
		
		printf("Terza domanda:\n");
		printf("Qual e' il paese piu' piccolo del mondo?\n");
		printf("A) Vaticano B) San Marino C) Lussemburgo\n");
		char risposta3;
		printf("Inserisci la risposta:");
		scanf(" %c", &risposta3);
		if (risposta3=='A' || risposta3=='a'){
			printf("Risposta corretta\n\n"); 
			punteggio++;
		}else {
			printf("Risposta sbagliata\n\n");
		}	
		
		printf("Quarta domanda:\n");
		printf("In che anno e' scoppiata la Prima Guerra Mondiale?\n");
		printf("A) 1916 B) 1915 C) 1914\n");
		char risposta4;
		printf("Inserisci la risposta:");
		scanf(" %c", &risposta4);
		if (risposta4=='C' || risposta4=='c'){
			printf("Risposta corretta\n\n"); 
			punteggio++;
		}else {
			printf("Risposta sbagliata\n\n");
		}	
		
		printf("Quinta domanda:\n");
		printf("Qual e' la citta' piu' popolosa d'Italia?\n");
		printf("A) Roma B) Milano C) Firenze\n");
		char risposta5;
		printf("Inserisci la risposta:");
		scanf(" %c", &risposta5);
		if (risposta5=='A' || risposta5=='a'){
			printf("Risposta corretta\n\n"); 
			punteggio++;
		}else {
			printf("Risposta sbagliata\n\n");
		}	
		
		printf("Sesta domanda:\n");
		printf("In che anno si sono tenuti i mondiali di calcio in Italia?\n");
		printf("A) 1994 B) 2006 C) 1990\n");
		char risposta6;
		printf("Inserisci la risposta:");
		scanf(" %c", &risposta6);
		if (risposta6=='C' || risposta6=='c'){
			printf("Risposta corretta\n\n"); 
			punteggio++;
		}else {
			printf("Risposta sbagliata\n\n");
		}	
		
		printf("Settima domanda:\n");
		printf("Quante corde ha una chitarra classica?\n");
		printf("A) 5 B) 6 C) 7\n");
		char risposta7;
		printf("Inserisci la risposta:");
		scanf(" %c", &risposta7);
		if (risposta7=='B' || risposta7=='b'){
			printf("Risposta corretta\n\n"); 
			punteggio++;
		}else {
			printf("Risposta sbagliata\n\n");
		}	
		
		printf("Complimenti %s, hai terminato il gioco.\n", nome);
		printf("Il punteggio totalizzato e': %d\n\n", punteggio);
		
		printf("Grazie per aver giocato con noi.\n\n");
						
	}else if (scelta=='B' || scelta=='b'){
		
		printf("Arrivederci\n");
	}
	
		
} while (scelta=='A'||scelta=='a');

return 0;

}