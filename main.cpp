#include <iostream>

using namespace std;


int main() {
    float risp(0), costoMoto(0), totRisp(0), ammanco(0), rimanenza(0);
    int count(0);
    
    cout << "Inserisci il costo della moto: ";
    cin >> costoMoto;
    cout << "Inserisci l'ammontare dei tuoi risparmi iniziali: ";
    cin >> risp;
    totRisp = risp;

  while (totRisp < costoMoto) {
        ammanco = costoMoto - totRisp;
    
        cout << "I risparmi accumulati (" << totRisp << 
          ") non sono sufficienti. Sono necessari altri " << ammanco << endl;
    
        cout << "Quanto altro hai risparmiato?" << endl;
        cin >> risp;
        count = count + 1;
        totRisp = totRisp + risp;
    }
  
    cout << "Hai risparmiato " << totRisp << " €. Puoi comprare la moto." << endl;
    cout << "numero di volte che sono stati effettuati dei risparmi: " << count << endl;
    rimanenza = totRisp - costoMoto;
    cout << "Ammontare dei risparmi rimanenti dopo l'acquisto della moto: " 
      << rimanenza << endl;
}