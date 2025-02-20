
#include "Bestellung.h"



Bestellung::Bestellung() {
    bestellNr = ++nrGlobal; // Eindeutige Bestellnummer generieren
    datum = new Date(); // Neues Datum erstellen
    posNr = 1; // Startposition f�r Bestellpositionen
    naechste = nullptr; // Keine n�chste Bestellung
}

Bestellung::~Bestellung() {
    // Ressourcen freigeben
    delete datum; // Datum freigeben
    for (Bestellposition* p : positionen) {
        delete p; // Alle Bestellpositionen freigeben
    }
}

void Bestellung::hinzufuegenBestellposition(Pizza* pizza, int menge) {
    
}

double Bestellung::berechneSumme() {
   
}

void Bestellung::setNaechste(Bestellung* naechste) {
    this->naechste = naechste; // N�chste Bestellung setzen
}

Bestellung* Bestellung::getNaechste() {
    return naechste; // N�chste Bestellung zur�ckgeben
}

//string Bestellung::toString() {
//    string text = "Bestellnummer: " + to_string(bestellNr) + "\n";
//    text += "Datum: " + datum->getStringDatum() + "\n"; // Datum hinzuf�gen
//    text += "Bestellpositionen:\n";
//
//    for (Bestellposition* p : positionen) {
//        text += p->toString() + "\n"; // Jede Bestellposition zur Ausgabe hinzuf�gen
//    }
//
//    text += "Gesamtsumme: " + to_string(berechneSumme()) + "\n"; // Gesamtsumme hinzuf�gen
//    return text; // R�ckgabe der string-Repr�sentation
//}

string Bestellung::toString() {
    
    return to_string(bestellNr);
}