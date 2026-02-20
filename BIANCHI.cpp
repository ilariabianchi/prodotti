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
	for(int i=0; i<d; i++){
		cout<<"\nnome: "<<v[i].nome<<endl;
		cout<<"categoria: "<<v[i].categoria<<endl;
		cout<<"prezzo: "<<v[i].prezzo<<endl;
	}
	cout<<endl;
}

//funzione cerca
int cerca (prodotto p, prodotto v[], int d){
	for(int i=0; i<d; i++){
		if(v[i].nome==p.nome){
			cout<<"il prodotto si trova nella poizione "<<i<<endl;
		}
		else{
			return -1;
		}
	}
}

//funzione cancella
bool cancella (prodotto p, prodotto v[], int d){
	
}

//funzione modifica
bool modifica (prodotto p, prodotto v[], int d){
	
}

int main(int argc, char** argv){
	 
	prodotto p;
	prodotto supermercato[0];
	//dimensione array
	int d=sizeof(supermercato)/sizeof(supermercato[0]);
	
	//menù per chiamare le funzionalità del programma
	int opzione;
	do{
		cout<<"1 - aggiungi \n2 - visualizza \n3 - cerca \n4 - cancella \n5 - modifica \n0 - stop \n";
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
				cout<<"\ninserisci il nome del prodotto da cercare: ";
				getline(cin, p.nome);
				int posizione=cerca(p, supermercato, d);
				cout<<endl;
			}
			break;
			
			case 4:{
				//cancellazione
				bool canc=cancella(p, supermercato, d);	
			}
			break;
			
			case 5:{
				//modifica
				bool mod=modifica(p, supermercato, d);	
			}
			break;
		}	
		
	}while(opzione!=0);
	
	return 0;
}
