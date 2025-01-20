#include "Warteschlange.h"

Warteschlange::Warteschlange(int maxBestellungen) {

}

bool Warteschlange::einfuegen(Bestellung* neu) {

    

   
}

Bestellung* Warteschlange::entnehmen() {



}

void Warteschlange::schließen() {
    geoeffnet = false; // Warteschlange schließen
}

bool Warteschlange::getGeoeffnet() {
    return geoeffnet; // Gibt zurück, ob die Warteschlange geöffnet ist
}

int Warteschlange::getAnzahlBestellungen() {
    return anzahlBestellungen; // Gibt die Anzahl der Bestellungen zurück
}

int Warteschlange::getMaxBestellungen() {
    return maxBestellungen; // Gibt die maximale Anzahl der Bestellungen zurück
}

Bestellung* Warteschlange::getEnde() {
    return ende; // Gibt die letzte Bestellung zurück
}

// Ausgabe der Warteschlange (nicht in der Abi-Aufgabenstellung enthalten)
void Warteschlange::ausgabeListe() {
    Bestellung* cursor = anfang;
    cout << "Warteliste-Anfang: BestellNr ";
    while (cursor != nullptr) {
        cout << cursor->toString() << " "; // Ausgabe der Bestellnummer
        cursor = cursor->getNaechste(); // Nächste Bestellung
    }
    cout << "Warteliste-Ende" << endl; // Ende der Warteschlange
}
