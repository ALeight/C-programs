#include <stdio.h>
#include <bool.h>



const int STRLEN = 80; ///< Max.tekstlengde.
const int ANTINT = 20; ///< Lengden på int-array.
int antallIArray(int tall[], const int n, const int min, const int max);
void fyllArray(int tall[], const int n);
char lesKommando();
int lesTall(const char tekst[], const int min, const int max);
void lesTekst(const char ledetekst[], char tekst[]);
bool sjekkTekst(const char tekst[]);
void skrivMeny();

int main() {
    char kommando;
    int tallene[ANTINT];
    char teksten[STRLEN];

    skrivMeny();
    kommando = lesKommando();

    while (kommando != 'Q') {
        switch (kommando) {
        case 'F': fyllArray(tallene, ANTINT); break;
        case 'A': printf("\n\tAntall i arrayen i intervallet 0-2000: %i\n",
                antallIArray(tallene, ANTINT, 0, 2000)); break;
        case 'L': lesTekst("Postnummer og -sted", teksten); break;
        case 'S': printf("\n\tTeksten er%s et gyldig postnr og -sted.\n",
                    ((!sjekkTekst(teksten)) ? " IKKE" : "")); break;
        default: skrivMeny(); break;
        }
        kommando = lesKommando();
    }
    return 0;
}