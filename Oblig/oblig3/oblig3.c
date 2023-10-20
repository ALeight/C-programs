#include <stdio.h>

const int STRLEN = 80; ///< Max.tekstlengde.
const int ANTINT = 20; ///< Lengden på int-array.

int antallIArray(int tall[], const int n, const int min, const int max);
void fyllArray(int tall[], const int n);

char lesKommando(){
    char tegn;
    printf("Skriv kommando:  ");
    scanf(" %c", &tegn);   getchar();
    return (toupper(tegn));
};

/**
 *  Leser og returnerer et tall mellom to gitte grenser.
 *
 *  @param   tekst  - Ledetekst til brukeren når ber om input/et tall
 *  @param   min    - Minimum for innlest og godtatt tallverdi
 *  @param   max    - Maksimum for innlest og godtatt tallverdi
 *
 *  @return  Godtatt verdi i intervallet 'min' - 'max'
 */

int lesTall(const char tekst[], const int min, const int max){
   int tall;
   do  {
     printf("\t%s (%i-%i):  ", tekst, min, max);
     scanf("%i", &tall);     getchar();
   } while (tall < min  ||  tall > max);
    return tall;
};

void lesTekst(const char ledetekst[], char tekst[]);
bool sjekkTekst(const char tekst[]){
    printf("\t%s:  ", ledetekst);
    gets(tekst);
};
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
