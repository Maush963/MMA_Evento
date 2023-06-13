#include <iostream>
#include "mma_event2.h"
using namespace std;

int main() {
    // Crear objetos
    Peleador *pel1 = new Peleador("Gustavo", "Masculino", "Peleador", 20, 1.80, 80, "Pluma", "Ortodoxo", 10, 8, 2, 0);
    Peleador *pel2 = new Peleador("Mauricio", "Masculino", "Peleador", 20, 1.80, 80, "Pluma", "Ortodoxo", 10, 8, 2, 0);

    Espectador *esp1 = new Espectador("Juan", "Masculino", "Espectador", 20, "381", 1, 1);
    Espectador *esp2 = new Espectador("Pedro", "Masculino", "Espectador", 20, "421", 2, 2);

    Arbitro *arb1 = new Arbitro("Carlos", "Masculino", "Arbitro", 20, "A3381");
    
    Juez *juez1 = new Juez("Pepe", "Masculino", "Juez", 20, "J3381", 10, 9);
    Juez *juez2 = new Juez("Pablo", "Masculino", "Juez", 20, "J3382", 10, 9);
    Juez *juez3 = new Juez("Paco", "Masculino", "Juez", 20, "J3383", 10, 9);

    // Crear pelea con los objetos creados
    Pelea *pelea1 = new Pelea(pel1, pel2, arb1, juez1, juez2, juez3, "Ganador: Gustavo", 30, 27);

    // Mostrar la pelea
    pelea1 ->  imprimir();

    return 0;
}

