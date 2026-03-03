#include <iostream>
#include <string>
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
string visualizza (prodotto v[], int d){
	string s;
	for(int i=0; i<d; i++){
		s+=v[i].nome+"\t";
		s+=v[i].categoria+"\t";
		//converto prezzo in stringa
		s+=to_string(v[i].prezzo)+"\n";
	}
	return s;
	cout<<endl;
}

//funzione cerca
int cerca (prodotto p, prodotto v[], int d){
	for(int i=0; i<d; i++){
		if(v[i].nome==p.nome){
			return i;
		}
	}
	return -1;
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
				cout<<visualizza(supermercato, d);	
			}
			break;
			
			case 3:{
				//cerca
				cout<<"\ninserisci il nome del prodotto da cercare: ";
				getline(cin, p.nome);
				int posizione=cerca(p, supermercato, d);
				cout<<"il prodotto si trova in posizione: "<<posizione;
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



