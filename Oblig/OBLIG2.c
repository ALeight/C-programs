/** OBLIG 2 - Enkel kalkulator 
* 
* Skal ha med regneoperasjonene +, -, / og * 
* Kommandoer for å avslutte programmet eller nullstille kalkulator
* Kommandoene: 't', 'c' og 's'
*
* 
* 
* @author Bendik Stølan Kristoffersen
* @file OBLIG2_.c
*/

/**
 * Enkel kalkulator
*/

#include <stdio.h>      // printf, scanf
#include <ctype.h>      // tolower, toupper

const int MAXOP = 10;   ///< max operasjoner programmet skal kjøre

int main()
{

    float nummer[MAXOP];        // Array for nummer tastet inn av bruker
    char operasjoner[MAXOP];    // Array for operasjoner tastet inn av bruker
    
    float tall;               

    printf("Gyldige operasjoner: ( + ), ( - ), ( / ), ( * ).\n");
    
    printf("= 0\n");            // Printer første tall

    for (int i = 0; i < MAXOP; i++)
    {
        
        printf(": ");                  // Linje som forventer brukers input
        scanf(" %c", &operasjoner[i]); // Legger inn første tegn fra bruker 
        
        switch(operasjoner[i])                     
        {
            case '+':
                scanf(" %f", &tall);
                nummer[i+1] = nummer[i] + tall;
                break;
            case '-':
                scanf(" %f", &tall);
                nummer[i+1] = nummer[i] - tall;
                break;
            case '*':
                scanf(" %f", &tall);
                nummer[i+1] = nummer[i] * tall;
                break;
            case '/':  
                scanf(" %f", &tall);
            if (tall == 0)
            {                   // Dersom bruker taster 0, kjører denne løkken
                i--;            // Skal ikke telle som gyldig forsøk
                printf("Divide by zero, you are no hero!\n"); 
                break;
            }                   // Neste linje kjører dersom tall != 0
                nummer[i+1] = nummer[i] / tall;
                break;             
            case 't': 
                scanf(" %f", &tall);    
                nummer[i+1] = tall; 
                break;
            case 's': 
                scanf(" %f", &tall); 
                i = MAXOP;
                printf("Kalkulator avsluttes.\n");
                break;
            case 'c':       // 'c' nullstiller kalkulator
                scanf(" %f", &tall); 
                nummer[i+1] = 0.0;  
            case 'k':
                scanf(" %f", &tall);
                i--;    // Itererer 1 tilbake, skal ikke telle som gyldig bruk
                printf("Ugyldig kommando gitt!\n");
            default:    // Dersom ingen av disse fungerer, har bruker tastet ugyldig kommando
                i--;
                break;
        }
        printf("%.2f", nummer[i+1]);
        printf("\n");
    }
            for (int i = 0; i < MAXOP; i++)
            {
                printf("%c og tallet:\t %.2f\n\n", operasjoner[i], nummer[i+1]);
            }

    return 0; 
}
