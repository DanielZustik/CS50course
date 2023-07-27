#include <stdio.h>

int countdown(int n) {                  //zavola se, otestuje ye neni splnen base case, nasledne se printne n (funkce se v tomto momente jeste endokonci)
    if (n <= 0) {                       //zavola se s mensi n - 1 hodnotou, otestuje se BC, printne se aktualni hodnota n a ynovu se zavola
        return 1;                       //az jedno zavolani bude posledni, tedz otestuje se a zjisti se, ze je splnen BC, vrati tuto hodnotu, a to instanci funkce ji predchayejici
                                        //--a timto se tato instance funkce ukonci definitivne
    } else {                            // tedz predposledni instance funkce obdrzela nyni hodnotu 1, tuhle hodnotu vztiskne a posleze popojde v kodu a vrati 0, a tak se definitivne uzvre
                                        // a takto si predavaji a tisknou nuly, az se dojde k uplne prvotni instanci funkce, ktera yase vrati 0, ale vrati ji do mejn uy a ta ji tiskne
        printf("%d ", n);
        printf("%i\n", countdown(n-1));
    }
 return 0;
}

int main() {
    int n = 5;
    printf("Countdown from %d: ", n);
    //countdown(n);
    printf("%i konec, tisknuti vzstupu prvni instance f-ce\n", countdown(n));
    return 0;
}