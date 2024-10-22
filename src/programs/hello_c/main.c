#include <stdio.h>

int main(int argc, char **argv)
{

int zahl1 = 0;
int zahl2 = 0;
double quotient = 0;

printf("Geben Sie Zahl 1 ein: ");
scanf("%d", &zahl1);
printf("Geben Sie Zahl 2 ein: ");
scanf("%d", &zahl2);

// Version 1
quotient = (double) zahl1 / (double) zahl2;   // (double) ... Typkonvertierung auf double
                                              // type casting
// der "größere" Datentyp bestimmt den Datentyp des Ergebnisses einer Rechenoperation 
printf("Version 1: %d / %d = %f\n", zahl1, zahl2, quotient);

// Version 2 ... Prüfung, ob Nenner 0 ist
if (zahl2 != 0)       // != ... ungleich
{
  // Zahl2 ist ungleich 0
  quotient = (double) zahl1 / (double) zahl2;
  printf("Version 2: %d / %d = %f\n", zahl1, zahl2, quotient);
} else 
{
  // Zahl2 = 0
  printf("Version 2: Eine Division durch 0 ist nicht erlaubt!\n");
}

// Übungen mit if-Verzweigung
/*
              if (Bedingung) 
              {
                // Bedingung erfüllt
                // ...
              } else
              {
                // Bedingung nicht erfüllt
                // ...
              }
*/

// Vergleichsoperatoren: <, <=, >, >=,!=, ==     == ... auf Gleichheit prüfen

// Lies 2 ganze Zahlen (num1, num2) ein und gib die größere Zahl aus 

int num1 = 0, num2 = 0;
printf("Zahl 1: ");
scanf("%d", &num1);
printf("Zahl 2: ");
scanf("%d", &num2);

if (num1 > num2)
{
  printf("%d ist größer\n", num1);
} else
{
  printf("%d ist größer\n", num2);
}



}
