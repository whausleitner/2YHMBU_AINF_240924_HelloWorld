#include <stdio.h>

int main(int argc, char **argv)
{

  // ... einzeiliger Kommentar

  /*
  Blockkommentar
  kann
  auch
  mehrzeilig
  sein
  */

  printf("Hello World!\n");
  printf("Das ist eine ");
  printf("Zeile\n");
  printf("das sind \nzwei Zeilen\n");
  // Visitenkarte
  printf("\nWalter Hausleitner\nGartenweg 27\n8160 Weiz\n\nMobil: 0676 123456789\n");

  // ----------------------------------------------------------------------------------------

  int anzahl; // Deklaration (Variable im Speicher anmelden) int ... integer (= Ganzzahl)
  anzahl = 0; // Initialisierung (einen Anfangswert zuweisen)

  // Deklaration + Initialisierung
  int anzahl1 = 0; // Namen müssen eindeutig sein

  anzahl = 15;
  printf("Anzahl: %d\n", anzahl); // d ... decimal

  double preis = 1.75;          // double ... Fließkommazahlen mit doppelter Genauigkeit
  printf("Preis: %f\n", preis); // f ... floating point
  printf("Preis: %.2f\n", preis);

  double betrag = 0;
  // Berechnung eines Produktes
  betrag = anzahl * preis;
  printf("Rechnungsbetrag: %.2f\n", betrag);

  //---------------------------------------------------------------------------------

  // Einlesen von Daten und Zuweisen an Variablen
  printf("---------------------------------\n\n");
  int menge=0;
  double verkaufspreis=0;
  double rechnungsbetrag = 0;

  // Einlesen der Menge
  printf("Eingabe der Menge: ");
  scanf("%d",&menge);
  

  rechnungsbetrag = menge * verkaufspreis;
  printf("Verkaufspreis: € %.2f\n",rechnungsbetrag);








  


}
