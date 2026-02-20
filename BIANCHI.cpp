#include <iostream>
using namespace std;

//struttura prodotto con nome, categoria, prezzo
struct prodotto{
	string nome;
	string categoria;
	float prezzo;
};

//funzione aggiungi
void aggiungi (prodotto p, prodotto v[], int &d){
	v[d]=p;
	d++;
}

//funzione visualizza
void visualizza (prodotto v[], int d){
	
}

//funzione cerca
int cerca (prodotto p, prodotto v[], int d){
	
}

//funzione cancella
bool cancella (prodotto p, prodotto v[], int d){
	
}

//funzione modifica
bool modifica (prodotto p, prodotto v[], int d){
	
}

int main(int argc, char** argv){
	 
	prodotto p;
	prodotto supermercato[100];
	//dimensione array
	int d=sizeof(supermercato)/sizeof(supermercato[0]);
	
	//menù per chiamare le funzionalità del programma
	int opzione;
	do{
		cout<<"1 - aggiungi \n2 - visualizza \n3 - cerca \n4 - cancella \n5 - modifica \n";
		cout<<"inserisci l'opzione: ";
		cin>>opzione;
		
		fflush(stdin);
		
		switch(opzione){
			case 1:{
				//aggiunta
				cout<<"\ninserisci il nuovo prodotto"<<endl;
				cout<<"nome: ";
				getline(cin, p.nome);
				cout<<"categoria: ";
				getline(cin, p.categoria);
				cout<<"prezzo: ";
				cin>>p.prezzo;
				aggiungi(p, supermercato, d);
				cout<<endl;
			}
			break;
			
			case 2:{
				//visualizzazione
				visualizza(supermercato, d);	
			}
			break;
			
			case 3:{
				//cerca
				int posizione=cerca(p, supermercato, d);	
			}
			break;
			
			case 4:{
				//cancellazione
				bool cancellazione=cancella(p, supermercato, d);	
			}
			break;
			
			case 5:{
				//modifica
				bool cambiamento=modifica(p, supermercato, d);	
			}
			break;
		}	
		
	}while(opzione!=0);
	
	return 0;
}
