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
	//assegno il prodotto aggiunto nell'ultima posizione dell'array
	v[d]=p;
	//aumento dimensione
	d++;
}

//funzione visualizza
string visualizza (prodotto v[], int d){
	string s;
	for(int i=0; i<d; i++){
		//aggiungo tutti i campi in una stringa
		s+=v[i].nome+"\t";
		s+=v[i].categoria+"\t";
		//converto prezzo in stringa
		s+=to_string(v[i].prezzo)+"\n";
	}
	//restituisco la stringa con tutti i campi della struct
	return s;
	cout<<endl;
}

//funzione cerca
int cerca (prodotto p, prodotto v[], int d){
	//scansiono array
	for(int i=0; i<d; i++){
		//se il nome del prodotto cosrrisponde con quello che sto ceracndo restituisco la posizione
		if(v[i].nome==p.nome){
			return i;
		}
	}
	//altrimenti se non lo trova restituisce -1
	return -1;
}

//funzione cancella
bool cancella (prodotto p, prodotto v[], int &d){
	//cerco in che posizione si trova l'elemento che voglio cancellare
	int posizione=cerca(p, v, d);
	//se la posizione è -1 e quindi l'elemento non ce restituisce falso
	if(posizione==-1){
		return false;
	}
	//se l'elemento viene trovato gli elementi vengono scalati di uno
	for(int i=posizione; i<d; i++){
		v[i]=v[i+1];
	}
	//diminuisco la dimensione
	d--;
	return true;
}

//funzione modifica
bool modifica (prodotto p, prodotto v[], int d){
		//cerco in che posizione si trova l'elemento che voglio modificare
    int posizione=cerca(p, v, d);
    	//se la posizione è -1 e quindi l'elemento non ce restituisce falso
    if(posizione==-1){
        return false; 
    }
    //altrimenti inserisco i nuovi campi modificati
    cout<<"nuovo nome: ";
    getline(cin, v[posizione].nome);
    cout<<"nuova categoria: ";
    getline(cin, v[posizione].categoria);
    cout<<"nuovo prezzo: ";
    cin>>v[posizione].prezzo;
    return true;
}

int main(int argc, char** argv){
	
	cout<<"programma gestione prodotti supermercato\nopzioni:\n";
	prodotto p;
	prodotto supermercato[100];
	//dimensione array
	int d=0;
	
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
				cout<<endl<<visualizza(supermercato, d)<<endl;	
			}
			break;
			
			case 3:{
				//cerca
				cout<<"\ninserisci il nome del prodotto da cercare: ";
				getline(cin, p.nome);
				int posizione=cerca(p, supermercato, d);
				cout<<"il prodotto si trova in posizione: "<<posizione<<endl;
				cout<<endl;
			}
			break;
			
			case 4:{
				//cancellazione
				cout<<"\ninserisci il nome del prodotto da cancellare: ";
				getline(cin, p.nome);
				bool canc=cancella(p, supermercato, d);
				if(canc==true){
					cout<<"prodotto eliminato\n";
				}else{
					cout<<"prodotto non trovato\n";
				}
				cout<<endl;
			}
			break;
			
			case 5:{
				//modifica
				cout<<"\ninserisci il nome del prodotto da modificare: ";
				fflush(stdin);
    			getline(cin, p.nome);
				bool mod=modifica(p, supermercato, d);
				if(mod==true){
     	    		cout<<"prodotto modificato\n";
   				}else{
       	 			cout<<"prodotto non trovato\n";
    			}
    			cout<<endl;
			}
			break;	
		}
		
	}while(opzione!=0);
	
	return 0;
}
